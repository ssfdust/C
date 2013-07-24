/*
 * =====================================================================================
 *
 *       Filename:  P319E6.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  04/13/2013 11:42:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
void _strncpy ( char * target, char * ar,int n);
int main (void)
{
		char target1[10];
		char target2[20];
		char ar[45] = "I am a student who is named ssfdust";

		strncpy (target1, ar, 9);
		_strncpy (target2, ar, 9);
		printf ( "%s\n%s\n",target1, target2 );
		return 0;
}

void _strncpy ( char * target, char * ar,int n)
{
		int i;
		for ( i = 0; i < n; i++)
				*(target + i) = *(ar + i);
}
