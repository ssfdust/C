/*
 * =====================================================================================
 *
 *       Filename:  P218E5.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2013 09:05:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
char *pr (char *str)
{
		char *pc;

		pc = str;
		while (*pc)
				putchar (*pc++);
		do {
				putchar(*pc--);
		} while (pc - str);
		return (pc);
}

int main (void)
{
		char * x = pr("Ho Ho Ho! ");
}

