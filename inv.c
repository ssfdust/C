/*
 * =====================================================================================
 *
 *       Filename:  inv.c
 *
 *    Description:  The program to invent words
 *
 *        Version:  1.0
 *        Created:  05/13/2013 11:09:54 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main ( int argc, char *argv[] )
{
		int i;
		for ( i = argc - 1;i > 0; i--)
				printf ( "%s  ", argv[i] );
		printf ( "\n" );
		return 0;
}
