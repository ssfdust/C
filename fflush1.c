/*
 * =====================================================================================
 *
 *       Filename:  fflush1.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  07/24/2013 08:53:28 AM
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
		char ch;
		int i = 0;
		while (i++ < 10)
		{
				ch = getchar();
		}
		ungetc(ch, stdin);
		fflush(stdout);
		return 0;
}
