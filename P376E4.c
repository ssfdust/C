/*
 * =====================================================================================
 *
 *       Filename:  P376E4.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  07/08/2013 11:27:20 AM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  StarDust , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (int argc, char *argv[])
{
		int i;
		char ch;
		char name[20];
		FILE *fp;

		if (argc < 2)
		{
				printf ( "Usage: %s file1 file2 ...\nI will show you all files' contents.", argv[0]);
				exit (1);
		}
		for (i = 1;i < argc;i++)
		{
				if ( (fp = fopen(argv[i], "r")) == NULL )
				{
						printf ( "Can't open file %s\n", argv[i] );
						exit (2);
				}
				while ((ch = getc(fp)) != EOF)
						putc(ch, stdout);
				fclose(fp);
		}
		return 0;
}
