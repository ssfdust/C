/*
 * =====================================================================================
 *
 *       Filename:  P186E6.c
 *
 *    Description:  EXercise
 *
 *        Version:  1.0
 *        Created:  02/04/2013 11:27:54 PM
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
		int total=0;
		char ch_1=0;
		char ch_2=0;
		while ( (ch_1=getchar())!='#'){
				if ( ch_1=='i' && ch_2=='e')
						total++;
				ch_2=ch_1;
		}
		printf ( "%d\n",total );

}
