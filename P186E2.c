/*
 * =====================================================================================
 *
 *       Filename:  P186E2.c
 *
 *    Description:  The 2nd exercise on page 186
 *
 *        Version:  1.0
 *        Created:  01/15/2013 10:25:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	 LOOP  8			/*  */
#define	 STOP '#'			/*  */
#define	 N_STOP 0			/*  */
int main (void){
	char in;
	int  n_word=0;
	while ((in=getchar())!= STOP){
		if ((n_word % LOOP)==N_STOP)
			printf ( "\n" );
		n_word++;
		printf ( "%3c %3d",in,in );
		}
	}

