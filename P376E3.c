/*
 * =====================================================================================
 *
 *       Filename:  P376E3.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  07/08/2013 11:06:37 AM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  StarDust , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
#define	NUM 256			/*  */
int main (void)
{
		FILE * in, * out;
		char ch;
		char files[2][NUM];

		printf ( "Enter two files' names(file1 file2):\n" );
		scanf ( "%s%s", files[0], files[1] );
		if ( files[0][0] == '\0' || files[1][0] == '\0' )
		{
				printf ( "Please enter correct names.\n" );
				exit (1);
		}

		if ((in = fopen(files[0], "r")) == NULL)
		{
				printf ( "Can't open file %s\n", files[0] );
				exit (1);
		}

		if ((out = fopen(files[1], "w")) == NULL)
		{
				printf ( "Can;t open file %s\n", files[1] );
				exit (1);
		}

		while ((ch = getc(in)) != EOF)
		{
				putc(ch, out);
		}
		return 0;
}
