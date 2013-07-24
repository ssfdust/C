/*
 * =====================================================================================
 *
 *       Filename:  P210E1.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/02/2013 03:21:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (void)
{
		char ch;
		int num=0;
		while ((ch = getchar()) != EOF){
				num = num + 1;
				if ( ch == '\n')
						num--;
		}
		printf ( "\nThere are %d characters.\n" , num );
		return 0;
}
