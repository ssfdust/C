/*
 * =====================================================================================
 *
 *       Filename:  P351E1.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/26/2013 09:52:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
void critic( int * p_units );
int main (void)
{
		int units;
		int * p_units = &units;

		printf ( "How many pounds to a firkin of butter?\n" );
		scanf ( "%d", &units);
		while ( units != 56 )
				critic( p_units );
		printf ( "You must have looked it up!\n" );
		return 0;
}

void critic (int * p_units)
{
		printf ( "No luck, chummy, Try again!\n" );
		scanf ( "%d", p_units );
}
