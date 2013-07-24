/*
 * =====================================================================================
 *
 *       Filename:  P150E8.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/11/2012 04:43:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main ()
{
	double num1,num2,out;
	int status;
	status=scanf ("%lf %lf",&num1,&num2);
	while (status==2)
	{
		out=(num1-num2)/(num1*num2);
		printf ("%lf\n",out);
		printf ("Next:");
		status=scanf ("%lf %lf",&num1,&num2);
	}
	return 0;
}
