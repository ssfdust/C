/*
 * =====================================================================================
 *
 *       Filename:  P243E2.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/07/2013 04:23:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int chline ( char ch, int i, int j);

int main(void){
		char ch;
		int i,j;
		scanf ( "%c %d %d", &ch, &i, &j );

		chline (ch, i, j);
		return 0;
}

int chline ( char ch, int i,int j){
		int prt = 1;
		for ( ;prt < i;prt++)
				printf ( " " );
		for ( ;i <= j; i++)
				printf ( "%c",ch );
}
