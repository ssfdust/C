/*
 * =====================================================================================
 *
 *       Filename:  P281E3.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/17/2013 09:59:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int max1 ( int ar[], int n);

int main (void){
		int ar[5]={1, 2, 3, 4, 5};
		int max;

		max = max1( ar, 5);
		printf ( "%d\n", max );

		return 0;
}

int max1 ( int ar[], int n){
		int i;
		int num_m;

		for ( i = 0; i < n;i++){
				if ( ar[i] > num_m)
						num_m = ar[i];
		}
		return num_m;
}
