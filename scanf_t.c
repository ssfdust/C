/*
 * =====================================================================================
 *
 *       Filename:  scanf_t.c
 *
 *    Description:  A program to test scanf function
 *
 *        Version:  1.0
 *        Created:  04/08/2013 06:08:01 PM
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
		char a[10];
		scanf ( "%4s", a );
		printf ( "%s\n",a );
		return 0;
}
