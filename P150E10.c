/*
 * =====================================================================================
 *
 *       Filename:  P150E10.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/16/2012 02:53:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	SIZE 8			/*  */

int main (void)
{
	int num[SIZE],index;
	for (index=0 ;index < SIZE ; index++ )
		scanf ( "%d", &num[index] );
	for (index=0 ;index < SIZE ; index++) 
			printf ( "%5d",num[index] );
	printf ( "\n" );
	for ( index=SIZE-1;index>=0 ;index-- )
		printf ( "%3d",num[index] );
	printf ( "\n" );
	return 0;
}
