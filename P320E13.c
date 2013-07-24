/*
 * =====================================================================================
 *
 *       Filename:  P320E13.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/21/2013 10:34:08 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include	<stdlib.h>
#include    <stdio.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
		int
main ( int argc, char *argv[] )
{
		double num = atof(argv[1]);
		double sum = 1;
		int      n = atoi(argv[2]);
		int      i;

		for ( i = 0; i < n;i++ )
				sum *= num;
		printf ( "%f\n",sum );
		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
