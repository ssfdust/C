/*
 * =====================================================================================
 *
 *       Filename:  ungetc.c
 *
 *    Description:  ungetc try
 *
 *        Version:  1.0
 *        Created:  07/22/2013 06:57:32 AM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  StarDust , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (void)
{
		char ar[10];
		char ch;
		while ( (ch = getchar()) != 'e' )
				putchar(ch);
		printf ( "\n" );
		ungetc(ch, stdin);
		scanf ( "%s", ar );
		ungetc(ar[0], stdin);
		puts(ar);
		ch = getchar();
		printf ( "\n" );
		putchar(ch);
		return 0;
}
