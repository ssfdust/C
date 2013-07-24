fprintf ( null, "\n",  );
/*
 *
 * =====================================================================================
 *
 *       Filename:  P376E6.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  07/21/2013 10:20:28 PM
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
#define	LEN 40			/*  */

int main( int argc, char * argv[])
{
		FILE *in, *out;
		int ch;
		char name[LEN];
		int ct = 0;
		if ( argc < 2 )
		{
				fprintf ( stderr, "Usage: %s filename\n",argv[0] );
				exit(1);
		}
		if ((in = fopen (argv[1], "r")) == NULL)
		{
				fprintf ( stderr, "I couldn't open the file \"%s\"\n",
					      argc[1]	);
				exit (2);
		}


}
