/*
 * =====================================================================================
 *
 *       Filename:  P150E7.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/07/2012 10:22:33 PM
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
	double num1,num2,res;
	printf ("Please enter two double numbers:");
	while (scanf ("%lf %lf",&num1,&num2)==2)
	{
		res=(num1-num2)/(num1*num2);
		printf ("%lf\n",res);
		printf ("Next:");
	}
}
