/*
 * =====================================================================================
 *
 *       Filename:  P320E11.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/21/2013 09:47:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  Free GNU
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main (void)
{
		char c;
		int n_word = 0;
		int n_up   = 0;
		int n_low  = 0;
		int n_pun  = 0;
		int n_dig  = 0;
		bool inword= false;
	   	
		printf ( "Please enter text(EOF to exit):\n" );

		while ( (c = getchar()) != EOF ) 
		{
				if ( ispunct(c) )
						n_pun++;
				if ( isupper(c) )
						n_up++;
				if ( islower(c) )
						n_low++;
				if ( isdigit(c) )
						n_dig++;
				if ( !isspace(c) && !inword )
				{
						n_word++;
						inword = true;
				}
				if ( isspace(c) && inword )
						inword = false;
		}
		printf ( "There is %d upper,%d lower,%d digits,%d words,%d puncts\n", n_up, n_low, n_dig, n_word, n_pun );
		return 0;
}
