/*
 * =====================================================================================
 *
 *       Filename:  P320E12.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/21/2013 10:26:58 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include	<stdlib.h>
#include 	<stdio.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
		int
main ( int argc, char *argv[] )
{
		int i;
		
		for ( i = argc - 1; i > 0; i-- ) {
				printf ( "%s ", argv[i] );
		}
		printf ( "\n" );
		return 0;
}				/* ----------  end of function main  ---------- */
