/*
 * =====================================================================================
 *
 *       Filename:  P315E7.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/27/2013 10:42:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "P315E7.h"
#include <time.h>
#include <stdlib.h>

int roll_count = 0;
static int rollem(int sides)
{
		int roll;

		roll = rand() % sides + 1;
		roll_count++;
		return roll;
}

int main (void)
{
		int dice, roll, sets;
		int sides;
		int i;

		srand((unsigned int) time(0));
		printf ( "Enter the number of sets, 0 to stop.\n" );
		while (scanf ( "%d", &sets ) == 1 && sets > 0 )
		{
				printf ( "How many dice and how many sides?\n" );
				scanf ( "%d%d", &dice, &sides );
				printf ( "Here are %d sets using %d %d-sides dice.\n",
					  sets, dice, sides );
				for ( i = 0;i < sets;i++ )
				{
						roll = roll_n_dice(dice, sides);
						printf ( "%4d", roll );
				}
		}
		return 0;
}

int roll_n_dice(const int dice, const int sides)
{
		int d;
		int total = 0;
		if ( sides < 2 )
		{
				printf ( "Need at least 2 sides\n" );
				return -2;
		}
		if ( dice < 1 )
		{
				printf ( "Need at least 1 dice.\n" );
				return -1;
		}
		for (d = 0;d < dice;d++ )
				total += rollem(sides);

		return total;
}
