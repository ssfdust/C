/*
 * =====================================================================================
 *
 *       Filename:  strcpy.c
 *
 *    Description:  a train for strncpy
 *
 *        Version:  1.0
 *        Created:  04/27/2013 05:52:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <string.h>

int main (void)
{
		char ar[13] = "abcdefghik";
		char _ar[13] = "         ";
		strncpy (_ar+5,ar+4,3);
		puts(_ar);

		return 0;
}
