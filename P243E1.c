/*
 * =====================================================================================
 *
 *       Filename:  P243E1.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/07/2013 04:17:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

double min ( double x, double y);

int main ( void ){
		double x,y;
		double ans;
		printf ( "Please enter two numbers\n" );

		scanf ( "%lf %lf", &x, &y );
		ans = min ( x,y);
		printf ( "The minner number is %lf\n",ans );
		return 0;
}

double min ( double x, double y){
		if ( x > y)
				return y;
		else
				return x;
}
