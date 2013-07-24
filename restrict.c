/*
 * =====================================================================================
 *
 *       Filename:  restrict.c
 *
 *    Description:  restrict appliction
 *
 *        Version:  1.0
 *        Created:  07/21/2013 09:12:06 PM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  StarDust , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main (void)
{
		int ar[10] = {0};
		int * restrict restar = (int*) malloc ( 10 * sizeof (int) );
		int * par = ar;
		for ( int n = 0;n < 10;n++)
		{
				par[n] += 5;
				restar[n] += 5;
				ar[n] *= 2;
				par[n] += 3;
				restar[n] += 3;
		}
		for (int n = 0;n < 10;n++)
				printf ( "%3d", ar[n] );
		for (int n = 0;n < 10;n++)
				printf ( "%3d", restar[n] );
		return 0;
}
