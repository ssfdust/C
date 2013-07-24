/*
 * =====================================================================================
 *
 *       Filename:  answer.c
 *
 *    Description:  Anser To P186E3
 *
 *        Version:  1.0
 *        Created:  01/20/2013 04:46:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main (void)
{
		int n;
		double sumevean = 0.0;
		int ct_even = 0;
		double sumodd = 0.0;
		int ct_odd = 0;

		
		while (scanf ( "%d", &n ) == 1 && n != 0) {
				
				if (n % 2 ==1 ) {
						sumodd += n;
						++ct_odd;
				}
				else
				{
						sumevean += n;
						++ct_even;
				}
		}
		printf ( "Number of evens: %d",ct_even );
		if (ct_even > 0)
				printf ( " average: %lf\n",sumevean / ct_even );
		putchar('\n');

		printf ("Number of odds:%d",ct_odd);
		if (ct_odd > 0)
				printf ( "average: %f",sumodd / ct_odd );
		putchar ('\n');

		return 0;
}

