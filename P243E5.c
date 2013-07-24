/*
 * =====================================================================================
 *
 *       Filename:  P243E5.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/08/2013 11:49:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void large_of ( double * n1,double *n2);

int main(void){
		double n1, n2;
		scanf ( "%lf %lf", &n1, &n2 );
		printf ( "x=%lf y=%lf\n",n1, n2 );
		large_of ( &n1, &n2);
		printf ( "Now x=%lf, y=%lf\n", n1, n2 );

		return 0;
}

void large_of ( double * n1,double * n2){
		if ( *n1 > *n2)
				*n2 = *n1;
		else
				*n1 = *n2;
}
