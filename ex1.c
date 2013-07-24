/*
 * =====================================================================================
 *
 *       Filename:  ex1.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  07/06/2013 11:24:58 PM
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
		int ch;

		FILE * fp;
		fp = fopen("wacky.txt", "r");
		ch = getc(fp);
		while ( ch != EOF )
		{
				putchar (ch);
				ch = getc (fp);
		}
}
