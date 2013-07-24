/*
 * =====================================================================================
 *
 *       Filename:  sqrt_l.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2013 09:42:25 PM
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
		double num,result_t = 0 ,result;
		result = 1.0;
		scanf ( "%lf", &num );
		while (result != result_t)
		{
				result_t = result;
				result = ( result_t + num / result_t ) / 2; 
		}
		printf ( "%lf\n", result );
}
