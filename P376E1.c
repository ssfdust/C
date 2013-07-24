/*
 * =====================================================================================
 *
 *       Filename:  P376E1.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  07/07/2013 09:43:30 PM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  StarDust , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
		int ch;
		FILE *fp;
		long count = 0;
		char files[256];

		printf ( "Please enter files' names:\n" );
		scanf ( "%s", files );
		if ( files[0] == '\0')
		{
				printf ( "Please enter correct names.\n" );
				exit (1);
		}

		if ((fp = fopen(files, "rb")) == NULL)
		{
				printf ( "Can't open %s\n", files);
				exit (1);
		}
		while ((ch = getc(fp)) != EOF)
		{
				putc(ch, stdout);
				count++;
		}
		fclose(fp);
		printf ( "File %s has %ld characters\n", files, count );
		return 0;
}
