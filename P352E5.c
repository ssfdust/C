/*
 * =====================================================================================
 *
 *       Filename:  P352E5.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/26/2013 10:24:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <time.h>
static unsigned int next = 1;
int rand1 (void);
void srand1( unsigned int seed );
int main (void)
{
		int ar[100];
		int i, j;
		int temp;
		srand1 ( (unsigned int) time(0) );
		for ( i = 0;i < 100;i++ )
				ar[i] = rand1() + 1;
		for ( i = 0;i < 100;i++ )
				for ( j = i + 1;j < 101;j++ )
						if ( ar[i] > ar[j] )
						{
								temp = ar[i];
								ar[i] = ar[j];
								ar[j] = temp;
						}
		for ( i = 0;i < 100;i++ )
				printf ( "%4u",ar[i] );
}
int rand1 (void)
{
		next = next * 1103515245 + 12345;
		return (unsigned int) ( next / 65536 ) % 9;
}
void srand1( unsigned int seed )
{
		next = seed;
}
