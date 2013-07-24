/*
 * =====================================================================================
 *
 *       Filename:  P352E4.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/26/2013 10:16:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int ct_f (void);
int main (void)
{
		int ct;
		while ( ct != 12 )
		{
				ct = ct_f();
		}
		printf ( "%d\n",ct );
}

int ct_f (void)
{
		static int ftc = 0;
		ftc++;
		return ftc;
}
