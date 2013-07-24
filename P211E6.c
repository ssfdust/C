/*
 * =====================================================================================
 *
 *       Filename:  P211E6.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/05/2013 04:04:33 PM
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

int main (){
		char ch;

		ch=get_first ();
		printf ( "%c\n", ch );
}
int get_first (void){
		char ch;

		ch = getchar ();
		while (isblank (ch)){
				continue;
		}
		return ch;
}
