/*
 * =====================================================================================
 *
 *       Filename:  P319E8.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  04/13/2013 12:31:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
char * inv(char * s);

int main (void)
{
		char * s = "Love  you forever";
		s = inv(s);
		puts(s);
		return 0;
}

char * inv(char * s)
{
		int n =  strlen (s) - 1;
		int i = 0;
		char temp[n+1];
		s = s + n;
		while ( *s-- )
		{
				temp[i] = *s;
				i++;
		}
		return temp;
}
