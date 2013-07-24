/*
 * =====================================================================================
 *
 *       Filename:  triangel.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2013 10:35:31 PM
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
		int a,b,c;
		scanf ( "%d%d%d", &a, &b, &c );
		
		if ( a + b > c && a + c > b &&
			 b + c > a)
				if ( a == b && a == c)
						puts ("等边三角形");
				else if ( a == b || a == c)
						puts ("等腰三角形");
				else 
						puts ("一般三角形");
		else 
				puts ("这不是三角形");

						
}
