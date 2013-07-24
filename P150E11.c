/*
 * =====================================================================================
 *
 *       Filename:  P150E11.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  12/18/2012 06:09:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdio.h>

int main (void)
{
	const double NUMERATOR=1.0;
	int symbol=1;
	double denominator,answer,final;
	printf ( "Please enter the final number:" );
	scanf ( "%lf", &final );
	for ( denominator=1.0;denominator <= final ; denominator++ ) {
		answer+=NUMERATOR/denominator;
		printf ( "%+.1lf/%.1lf",NUMERATOR,denominator );
	}
	printf ( "=%5.5lf\n",answer );
	
	for ( denominator=1.0,answer=0; denominator <=final;denominator++) {
		answer+=symbol*NUMERATOR/denominator;
		printf ("%+.1lf/%.1lf",symbol*NUMERATOR,denominator);
		symbol*=(-1);
	}
	printf ("=%5.5lf\n",answer);
}
