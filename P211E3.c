/*
 * =====================================================================================
 *
 *       Filename:  P211E3.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/02/2013 03:58:30 PM
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
#include <stdbool.h>

int main (void){
	char ch;
	int lower_num,uppwer_num;
	uppwer_num = 0;
	lower_num = 0;
	while ( (ch = getchar()) != EOF){
			if ( isupper(ch) = true )
					uppwer_num++;
			if ( islower(ch) =true)
					lower_num++;
	}
	printf ( "Lower are %d,upper are %d.\n" , lower_num , uppwer_num );
	return 0;
}
