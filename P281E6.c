/*
 * =====================================================================================
 *
 *       Filename:  P281E6.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/17/2013 07:01:33 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	ROWS 5			/*  */
#define	COLS 3			/*  */

void copy_ptr (double (*ar1)[], double (*ar2)[], int n);

int main (void){
		double ar[ROWS][COLS] = {
				{1,2,3},
				{1,2,3},
				{4,5,6},
				{7,8,9},
				{11,11,11}
		};
		double target[ROWS][COLS];

		copy_ptr ( ar,target,5);

		printf ( "%lf\n", target[3][2] );
}

void copy_ptr(double (*ar1)[5], double (*ar2)[5], int n){
		int j,i;

		for (j = 0;j < n;j++){
				for (i = 0; i < COLS;i++)
						*(*(ar2 + j) + i) = *(*(ar1 + j) + i);
		}
}
