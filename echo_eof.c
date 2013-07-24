/*
 * =====================================================================================
 *
 *       Filename:  echo_eof.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/01/2013 04:57:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (void){
		int ch;

		while ((ch =getchar()) != EOF){
				putchar (ch);
		}
		return 0;
}
