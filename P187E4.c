/*
 * =====================================================================================
 *
 *       Filename:  P187E4.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  01/30/2013 06:19:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
		int ch;
		printf ( "Please enter something:");
bgn:	if ((ch=getchar())=='#') { 
				goto end;
		}
		else if (ch == '.') { 
				putchar ('!');
				goto bgn;
		}
		else if (ch == '!')  {
				printf ( "!!" );
				goto bgn;
		}
		putchar (ch);
		goto bgn;
end:    printf ( "\n" );
		return 0;
}
