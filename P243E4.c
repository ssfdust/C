/*
 * =====================================================================================
 *
 *       Filename:  P243E4.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/08/2013 10:42:32 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

double cal ( double n1, double n2);

int main (void){
		double n1,n2;
		double ans;
		scanf ( "%lf %lf", &n1, &n2 );
		ans = cal ( n1, n2);
		printf ( "%lf\n", ans );
}

double cal ( double n1, double n2){
		double ans;
		ans = 1 / ( 1 / n1 + 1 / n2);
		return ans;
}
