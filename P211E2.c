/*
 * =====================================================================================
 *
 *       Filename:  P211E2.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/02/2013 03:31:33 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	COLS 10			/*  */

int main(void){
		char ch;
		int rows,cols;
		cols = 0;
		while ((ch = getchar()) != EOF){
				if (cols == COLS ){
						printf ( "\n" );
						cols = 0;
				}
				if (ch == '\n'){
						printf ( " \\n " );
						continue;
				}
				else if (ch =='\t'){
						printf ( "  \\t  " );
						continue;
				}
				printf ("%c %d  ",ch,ch);
				cols++;
		}
		printf ( "\n" );
		return 0;
}
