/*
 * =====================================================================================
 *
 *       Filename:  define1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/30/2013 09:58:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#define	X	3		/*  */
#define	Y			/*  */
#include <stdio.h>
const int LIM = 3;
int i = 3 * LIM;
const int g = 4 * LIM;
const int f = 5 * X;
static int ar[LIM] = {0};
static int ar_1[X] = {0};
int main (void)
{

		Y = 3;
		printf ( "LIM = %d \n i = %d(3*LIM)\n g = %d(4 * LIM)\n f =  %d 5 * X\n"
				"ar[2] = %d(LIM)\n ar_1[2] = %d\n",LIM,i,g,f,ar[2],ar_1[2]
			    );
		printf ( "%d\n", Y );


}

