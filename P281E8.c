/*
 * =====================================================================================
 *
 *       Filename:  P281E8.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/18/2013 10:15:20 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	ROWS 3			/*  */
#define	COLS 5			/*  */

void copy_arr ( double ar[][COLS],double target[][COLS], int n);
void show_arr ( double ar[][COLS], int n);
void copy_aar ( double ar[rows][cols], double target[rows][cols], int rows, int cols);
void show_aar ( double ar[rows][cols], int rows, int cols);

int main (void){
		double origin[3][5] = {
				{1,2,3,4,5},
				{6,7,8,9,10},
				{11,12,13,14,15}
		};
		double target[ROWS][COLS];

		copy_arr ( origin, target, COLS); 
		show_arr ( origin, COLS);
		show_arr ( target, COLS);
}

void copy_arr ( double ar[][COLS], double target[][COLS], int n){
		int i,j;

		for (i = 0; i < ROWS; i++)
				for ( j = 0; j < n; j++)
						target[i][j] = ar[i][j];

}

void show_arr (double ar[][COLS],int n){
		int i,j;

		for (i = 0; i < ROWS; i++)
				for ( j = 0; j < n; j++)
						printf ( "%3.0lf", ar[i][j] );
		printf ( "\n" );
}

void copy_aar ( double ar[rows][cols], double target[rows][cols], int rows, int cols){
		int i,j;

		for ( i = 0; i < rows; i++)
				for ( j = 0; j < cols; j++)
						target[i][j] = ar[i][j];

}

void show_arr ( double ar[rows][cols], int rows, int cols){
		int i,j;

		for ( i = 0; i < rows; i++)
				for ( j = 0; j < cols; j++)
						printf ( "%4.0lf", ar[i][j] );
		printf ( "\n" );
}
