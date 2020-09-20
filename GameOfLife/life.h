/*
 * life.h
 *
 *  Created on: Sep 13, 2016
 *      Author: leune
 */

#ifndef LIFE_H_
#define LIFE_H_

#define XSIZE	15
#define YSIZE 	15
#define DEFAULTROUNDS 15
#define ALIVE	1
#define	DEAD	0

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

#endif /* LIFE_H_ */