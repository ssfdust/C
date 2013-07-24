/*
 * =====================================================================================
 *
 *       Filename:  P211E5.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/04/2013 10:29:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void)
{
		int high = 100;
		int low = 1;
		int guess = (high + low) / 2;
		char ans;

		printf ( "Pick an number from 1 to 100.I will try to guess" );
		printf ( "it.\nRespond with a y if my guess is right an with" );
		printf ( "\nan n if it is wrong.\n" );
		printf ( "Uh...is your number %d?\n",guess );
		while (((ans=getchar()) != 'y')){
				while((getchar() != '\n'))
						continue;
				switch (ans)
				{
						case 'H':
								high = guess - 1;
								break;
						case 'L':
								low = guess + 1;
								break;
						default:
								printf ( "Please enter right key...\n" );
				}

				guess = (high + low) / 2;
				printf ( "Un...it's %d right?\n" , guess );
						}
		printf ( "I think I have done,it's %d\n",guess );
		return 0;
}
