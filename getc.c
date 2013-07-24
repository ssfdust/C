/*
 * =====================================================================================
 *
 *       Filename:  getc.c
 *
 *    Description:  getc() test
 *
 *        Version:  1.0
 *        Created:  07/24/2013 10:35:04 AM
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
		FILE *fp;
		char file_src[SLEN];
		if (!gets(file_src) && file_src[0] == '\0')
		{
				fprintf ( stdout, "End\n" );
				exit (0);
		}
		if ((fp = fopen(file_src, "r")) == NULL)
		{
				fprintf ( stderr, "\n",  );
		}
}
