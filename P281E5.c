/*
 * =====================================================================================
 *
 *       Filename:  P281E5.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/17/2013 10:34:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

double gulf (double * ptr,int n);

int main (void){
		double ar[5] = {1.2, 11.3, 0.4, 1.5, 1.6};
		double cz;

		cz = gulf (ar, 5);
		printf ( "%lf\n", cz );
}

double gulf (double * ptr, int n){
		double min = *ptr, max = 0;
		int i;
		for ( i = 0; i < n; i++){
				if (*(ptr + i) > max)
						max = *(ptr + i);
				else if (*(ptr + i) < min)
						min = *(ptr + i);
		}
		printf ( "%lf-%lf=%lf\n",max,min,max-min );
}
