/*
 * =====================================================================================
 *
 *       Filename:  P150E13.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  12/19/2012 09:28:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	SIZE 8			/*  */

int main (void)
{
	double var1[SIZE],var2[SIZE];
	int index1=0,index2=0;
	printf ( "Please enter eight elements:\n" );
	while (index1 < SIZE){
		scanf ( "%lf", &var1[index1] );
		index1++;
	}
	index1=0,index2=0;
	var2[index2]=var1[index1];
	while (index2++ < SIZE-1){
		var2[index2]=var2[index2-1]+var1[index1];
		index1++;
		}	
	for (index1=0;index1 < SIZE;index1++)
		printf ("%12.2lf",var1[index1]);
	printf ( "\n" );
	for (index2=0;index2 < SIZE;index2++)
		printf ("%12.2lf",var2[index2]);
	printf ( "\n" );
}
