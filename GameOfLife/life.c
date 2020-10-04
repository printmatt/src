/*
 * life.c
 *
 *  Created on: Sep 13, 2016
 *      Author: leune
 */
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#define FILENAME "lifeinput.txt"
//LIVES determine how many spaces will be Alive initally (8:2 equals 4 spaces)
#define LIVES 8
#define DEAD 0
#define ALIVE 1
// Initialize the necessary variables that will be used across the program
static int rounds = 0, XSIZE = 0, YSIZE = 0;
static int initial_spaces[LIVES];
//read input from text file
int readInput();
// initialize the board to all dead cells
void initBoard(int vBoard[][YSIZE]);
// play a round; updates the cells on the board
void playRound(int vBoard[][YSIZE]);
// print the board
void printBoard(int vBoard[][YSIZE]);
// determine the number of neighbors
int neighbors(int vBoard[][YSIZE], int x, int y);

/* determine if the given coordinates are within bounds
 * returns 0 if the cell is out of bounds; returns 1 if
 * the cell is in bounds
 */
int onBoard(int x, int y);


int main(int argc, char *argv[]) {

    //We read the inputs from our text file using this helper method
    //Store input into the static variables created
	readInput();
     
    //create a 2 dimensions array 
	int board[XSIZE][YSIZE];

    //Transfer the alive spaces from our inital spaces array into the board
	initBoard(board);
	for( size_t i = 0; i < LIVES; i = i + 2){
		board[initial_spaces[i]][initial_spaces[i+1]] = ALIVE;
	}
    
    //Start playing the game as usual
	printf("Playing %d rounds.\n\n", rounds);
	for (int i=0; i<rounds; i++) {
		printf("Round: %d\n", i+1);
		printBoard(board);
		playRound(board);

		sleep(1);
	}

	return 0;
}

// Open text file and read in the number of rounds, grid size, and initial spaces
int readInput(){
    FILE *dataFile;
    int counter = 0;
    //Open file to read
    dataFile = fopen(FILENAME, "r");

    //Print cannot open when file is empty
    if(dataFile == NULL){
        fprintf(stderr,"Unable to open %s.\n",FILENAME);
        return 1;
    }

    //We first retrieve the number of rounds, and the number of rows and columns for grid size
    fscanf(dataFile,"%d%d%d",&rounds,&XSIZE,&YSIZE);

    //Continue to run a loop to retrieve our inital spaces location by
    //storing their rows and columns into an array
    while (!feof(dataFile)) {
        fscanf(dataFile,"%d",&initial_spaces[counter]);       
        counter++;
    }
    fclose(dataFile);
    return 0;
}

// initialize the board game
void initBoard(int vBoard[][YSIZE]) {
    /* write this function */
	// go through each row
    for(size_t row = 0; row<XSIZE; row++){
        //go through each cell as dead
        for(size_t cell=0; cell < YSIZE; cell++){
            vBoard[row][cell]=DEAD;
        }
    }
}

// after 1 round
void playRound(int vBoard[][YSIZE]) {
	int tmpBoard[XSIZE][YSIZE];
	initBoard(tmpBoard);

	// perform the algorithm on vBoard, but update tmpBoard
	// with the new state
	for(size_t row = 0; row<XSIZE; row++){
        //evaluate each cell in VBoard and make updates to the tempboard
        for(size_t cell=0; cell < YSIZE; cell++){
            //if cell is a live. make it dead if neighbors <2 and >3, keep it alive if neighbors =2 or 3
            if(vBoard[row][cell] == ALIVE){
                if(neighbors(vBoard,row,cell) <2)
                tmpBoard[row][cell] = DEAD;
                else if(neighbors(vBoard,row,cell) <=3)
                tmpBoard[row][cell] = ALIVE;
                else if(neighbors(vBoard,row,cell) >3)
                tmpBoard[row][cell] = DEAD;
            }
            // else if it is dead, revive it when there are 3 neighbors
            else{
                if(neighbors(vBoard,row,cell) == 3){
                    tmpBoard[row][cell] = ALIVE;
                }
            } 
        }
    }

    // copy tmpBoard over vBoard
	for (int y=0; y < YSIZE; y++) {
		for (int x=0; x < XSIZE; x++) {
			vBoard[x][y] = tmpBoard[x][y];
		}
	}
}

// check boundaries
int onBoard(int x, int y) {
	if (x < 0 || x >= XSIZE)
		return 0;
	else
		if (y < 0 || y >= YSIZE) return 0;
	else
		return 1;
}

// return how many neigbors a cell has
int neighbors(int vBoard[XSIZE][YSIZE], int x, int y) {
	int n=0;

	int xp1 = x + 1;
	int xm1 = x - 1;
	int yp1 = y + 1;
	int ym1 = y - 1;

	if (onBoard(xm1, y) && vBoard[xm1][y] == ALIVE) n++;
	if (onBoard(xm1, yp1) && vBoard[xm1][yp1] == ALIVE) n++;
	if (onBoard(x, yp1) && vBoard[x][yp1] == ALIVE) n++;
	if (onBoard(xp1, yp1) && vBoard[xp1][yp1] == ALIVE) n++;
	if (onBoard(xp1, y) && vBoard[xp1][y] == ALIVE) n++;
	if (onBoard(xp1, ym1) && vBoard[xp1][ym1] == ALIVE) n++;
	if (onBoard(x, ym1) && vBoard[x][ym1] == ALIVE) n++;
	if (onBoard(xm1, ym1) && vBoard[xm1][ym1] == ALIVE) n++;

	return n;
}

void printBoard(int vBoard[][YSIZE]) {
	
    //Print each row
    for(size_t row = 0; row<XSIZE; row++){
        //Print each cell in row 5 spaces apart
        for(size_t cell=0; cell < YSIZE; cell++){
            printf("%5d",vBoard[row][cell]);
        }
        printf("\n");
    }
    
}