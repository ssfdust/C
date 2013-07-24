/*
 * =====================================================================================
 *
 *       Filename:  P281E7.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/18/2013 09:49:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void copy_arr ( int ar[], int target[], int n);

int main(void){
		int ar[7] = {1, 2, 3, 4, 5, 6, 7};
		int target[3];
		
		copy_arr ( ar + 2, target, 3);
		printf ( "%d %d %d\n",target[0], target[1], target[2] );

}

void copy_arr ( int ar[], int target[], int n){
		int i;
		for ( i = 0; i <= n;i++)
				target[i] = ar[i];
}
