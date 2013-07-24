/*
 * =====================================================================================
 *
 *       Filename:  intfflush.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  07/22/2013 07:13:44 AM
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
		gets(ar);
		puts(ar);
		fflush(stdout);
		return 0;
}
