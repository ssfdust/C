/*
 * =====================================================================================
 *
 *       Filename:  showchar.c
 *
 *    Description:  A program on page 199,I  try to rewrite it on my own.
 *
 *        Version:  1.0
 *        Created:  03/01/2013 04:10:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int ch;
	int rows,cols;
	printf ( "Please enter a character and two numbers.\n" );
	while ((ch = getchar ()) != '/n')
	{
		if ( scanf("%c %d %d",&ch,%rows,cols) != 3)
			exit (1);
		
	}

}
