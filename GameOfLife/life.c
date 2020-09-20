/*
 * life.c
 *
 *  Created on: Sep 13, 2016
 *      Author: leune
 */
#include <stdio.h>
#include <unistd.h>
#include "life.h"
#include <stddef.h>

int main(int argc, char *argv[]) {
	int board[XSIZE][YSIZE];
	int rounds = DEFAULTROUNDS;

	initBoard(board);
	board[5][5] = ALIVE;
	board[5][6] = ALIVE;
	board[5][7] = ALIVE;
	board[6][6] = ALIVE;
    
	printf("Playing %d rounds.\n\n", rounds);
	for (int i=0; i<rounds; i++) {
		printf("Round: %d\n", i+1);
		printBoard(board);
		playRound(board);

		sleep(1);
	}

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
int neighbors(int vBoard[][YSIZE], int x, int y) {
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

void printBoard(int vBoard[XSIZE][YSIZE]) {
	
    //Print each row
    for(size_t row = 0; row<15; row++){
        //Print each cell in row 5 spaces apart
        for(size_t cell=0; cell < 15; cell++){
            printf("%5d",vBoard[row][cell]);
        }
        printf("\n");
    }
    
}