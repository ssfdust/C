/*
 * =====================================================================================
 *
 *       Filename:  P281E2.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/17/2013 09:42:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void copy_ptr (double * p,double * ptr, int n);
void copy_arr (double ar[], double br[],int n);

int main (void){
		double score[5] = {1, 2, 3, 4, 5};
		double target1[5];
		double target2[5];
		int i = 0;

		copy_arr (score, target1, 5);

		for ( ; i < 5; i++)
				printf ( "%lf %lf\n",target1[i],target2[i] );

		return 0;
}

void copy_ptr (double * p, double *ptr, int n){
		int i = 0;
		for (i = 0;i < n; i++){
				*(ptr + i) = *(p + i);
		}
}

void copy_arr (double ar[5], double br[5],int n){
		int i = 0;
		for ( ; i < n; i++)
				br[i] = ar[i];
}
