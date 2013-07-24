/*
 * =====================================================================================
 *
 *       Filename:  mycp.c
 *
 *    Description:  Exercise for copy 
 *
 *        Version:  1.0
 *        Created:  07/07/2013 09:15:07 AM
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
#include <string.h>

int main ( int argc, char *argv[] )
{
		FILE * in, * out;
		int ch;
		if (argc < 2)
		{
				fprintf ( stderr , "Usage: mycp File1 File2\n"  );
				exit (1);
		}

		if ((in = fopen(argv[1], "r+b")) == NULL)
		{
				fprintf ( stderr, "I couldn't open the file %s\n",argv[1]  );
				exit(2);
		}

		if ((out = fopen(argv[2], "w+b")) == NULL)
		{
				fprintf ( stderr, "Can't create file %s\n", argv[2] );
				exit(2);
		}
		while ((ch = getc(in)) != EOF)
				putc (ch, out);
				
		if ( !fclose(in) && !fclose(out) )
		{
				printf ( "OK\n" );
				return 0;
		}
		else
		{
				printf ( "Fail to close\n" );
				return -1;
		}
}
