/*
 * =====================================================================================
 *
 *       Filename:  primer_n.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2013 09:52:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>
int main (void)
{
		int n,i;
		bool isP = 1;
		for (n = 1;n < 100;n++)
				for (i = 2;i <= n;i++)
				{
						if ( i == n){
								printf ( "%4d" , n );
								break;
						}
						if ( n % i == 0)
								break;
				}
		printf ( "\n" );
}
