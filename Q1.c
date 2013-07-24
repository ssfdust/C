/*
 * =====================================================================================
 *
 *       Filename:  Q1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/20/2012 10:14:40 PM
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
	long long num;
	scanf ( "%lld", &num );
	int 	n[4],i;
	for ( i=0;i<4;i++ ) {
		n[i]=(num)%10000;
		num/=10000;
	}
	for ( i--;i>=0 ;i-- )
		printf ( "%04d\n",n[i] );
}
