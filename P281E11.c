/*
 *       Filename:  P281E11.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/18/2013 06:09:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

double a_average ( double ar[][5], int n);
double e_average ( double ar[][5], int n);
double max ( double ar[][5], int n);
void storage ( double (*ar)[5], int n);
void print ( double (*ar)[5], int n, double all_aver, double evr_aver[3], double _max);

int main (){
		double all_aver = 0.0;
		double evr_aver[3] = {0.0, 0.0, 0.0};
		double _max = 0.0;
		double ar[3][5]; 
		int i;

		storage (ar, 3);
		all_aver = a_average (ar, 3);
		for ( i = 0; i < 3; i++)
				evr_aver[i] = e_average (ar, i);
		_max = max(ar, 3);
		print ( ar, 3, all_aver, evr_aver, _max);

		return 0;
}

double a_average ( double ar[][5], int n)
{
		int i,j;
		double sum,average = 0.0;

		for (i = 0; i < n; i++)
				for ( j = 0; j < 5; j++)
						sum += ar[i][j];
		average = sum / ( i * j);

		return average;
}

double e_average (double ar[][5], int n)
{
		double sum = 0.0;
		const int num = 5;
		int i;

		for ( i = 0; i < num; i++)
				sum += ar[n][i];

		return sum / num;
}

double max ( double ar[][5], int n)
{
		int i,j;
		double max = 0.0;

		for ( i = 0; i < n; i++)
				for ( j = 0; j < 5; j++)
						if ( ar[i][j] > max )
								max = ar[i][j];

		return max;
}

void storage ( double (*ar)[5], int n)
{
		int i,j;

		for ( i = 0; i < n; i++){
				for ( j = 0; j < 5; j++)
						scanf ( "%lf", *(ar + i) + j );
		}
}

void print ( double (*ar)[5], int n, double all_aver, double evr_aver[3], double _max)
{
		int i,j;

		for ( i = 0; i < n; i++){
				for ( j = 0; j < 5; j++)
						printf ( "%7.3lf", ar[i][j] );
				printf ( "\n" );
		}
		printf ( "\nThe average of all numbers is %7.3lf\n", all_aver );
		printf ( "The average of each group are %7.3lf %7.3lf %7.3lf \n", evr_aver[0], evr_aver[1], evr_aver[2] );
		printf ( "The max number of the number group is %7.3lf\n", _max );
}
