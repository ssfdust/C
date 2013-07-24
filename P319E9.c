/*
 * =====================================================================================
 *
 *       Filename:  P319E9.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  04/27/2013 06:24:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	LEN 81			/*  */
int drop_sp( char * s );
int main (void)
{
		char orig[LEN];

		while (gets(orig) && orig[0] != '\0')
		{
				drop_sp(orig);
				puts(orig);
		}
		puts("Bye!");
		return 0;
}

int drop_sp( char * s )
{
		int ct = 0;
		char * pos;
		while ( *s )
		{
				if ( *s == ' ' )
				{
						pos = s;
						do
						{
								*pos = *(pos + 1);
								pos++;
						} while (*pos);	
				}
				else 
						s++;
		}
}
