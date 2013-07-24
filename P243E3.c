/*
 * =====================================================================================
 *
 *       Filename:  P243E3.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/07/2013 05:35:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

void chline ( char ch, int i, int j);

int main (void){
		char ch;
		int i,j;

		ch = '*';
		i = 4;
		j = 5;
		chline ( ch, i ,j);
		return 0;

}

void chline ( char ch, int i, int j){
		int rows,cols;

		for ( rows = 0;rows < i;rows++){
				for ( cols = 0; cols < j; cols++)
					   putchar (ch)	;
				printf ( "\n" );
		}
}
