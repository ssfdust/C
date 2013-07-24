/*
 * =====================================================================================
 *
 *       Filename:  P186E1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/14/2013 10:23:49 PM
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
int main (void){
	char chk;
	int	rd=0,spa=0,swc=0,protect;
	while ((chk=getchar())!='#' ){
		if (chk==' ')
			spa++;
		else if (chk=='\n')
			swc++;
		else if (isalpha (chk) || ispunct(chk))
			rd++;
	}
	printf ( "There are %d spaces,%d switchs,%d other characters\n%d",spa,swc,rd,protect );
}
