/*
 * =====================================================================================
 *
 *       Filename:  ctypes_app.c
 *
 *    Description:  ctypes applicantion
 *
 *        Version:  1.0
 *        Created:  01/07/2013 06:05:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
#define	PASS 5			/*  */

int main(void){
	char ch;
	
	while ((ch = getchar ())!='\n' ) {
		if (isalpha(ch))
			putchar (ch + PASS);
		else
			putchar (ch);
	}
	putchar (ch);	
	return 0;
}
