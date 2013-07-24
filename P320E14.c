/*
 * =====================================================================================
 *
 *       Filename:  P320E14.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/21/2013 10:56:34 AM
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
#include 	<ctype.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  including two parts,
 *  			  one is  from stdlib atoi(),
 *  			  second is my own atoi(). 
 * =====================================================================================
 */
		int
main ( int argc, char *argv[] )
{
		int num1, num2;
		printf ( "This will turn string to integrate\n" );
		num1 = atoi(argv[1]);
		num2 = myatoi(argv[1]);
		printf ( "%d %d\n",num1, num2 );
		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
		int
myatoi(char * p)
{

}

