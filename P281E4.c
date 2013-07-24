/*
 * =====================================================================================
 *
 *       Filename:  P281E4.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/17/2013 10:24:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int max_index ( double ar[], int n);

int main (void){
		double ar[] = {8.1, 12.2, 3.3, 4.4};
		int index;
		int i;

		index = max_index (ar, 4);

		printf ( "%d\n", index );
}

int max_index ( double ar[], int n){
		int i,index=0;
		double num_x = ar[0];

		for (i = 0; i < n; i++){
				if (ar[i] > num_x){
						num_x = ar[i];
						index = i;
				}
		}
		return index;
}
