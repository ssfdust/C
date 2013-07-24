/*
 * =====================================================================================
 *
 *       Filename:  P243E6.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/08/2013 12:03:59 PM
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

char ABC(char ch);

int main (void){
		char ch;

		while ((ch = getchar()) != EOF){
				printf ( "The character is %c,and the location of the character is %d\n",ch,ABC(ch) );
		}
}

char ABC(char ch){
		if (isalpha(ch))
				ch = tolower(ch) - 'a' + 1;
		else
				return -1;
		return ch;
}

