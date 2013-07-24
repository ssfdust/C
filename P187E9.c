/*
 * =====================================================================================
 *
 *       Filename:  P187E9.c
 *
 *    Description:  Exercise 7-9
 *
 *        Version:  1.0
 *        Created:  02/05/2013 05:22:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define NO 0			/*  */
#define	YES	1 		/*  */
int main (void){
		long num;
		long div;
		long lim;
		int prime;

		printf ( "Please enter limit to values to be checked;" );
		printf ( "Enter q to quir.\n" );
		while (scanf ( "%ld", &lim ) == 1 && lim > 0){
				for (num = 2; num <= lim;num++){
						for (div =2,prime = YES; (div * div) <= num;div++)
								if ( num % div == 0 )
										prime = NO;
					   	if ( prime == YES )
										printf ( "%ld is a prime\n",num );
				}
		}
		return 0;
}
