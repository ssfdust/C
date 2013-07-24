/*
 * =====================================================================================
 *
 *       Filename:  P421E1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013-06-28 10:27:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

int tot_day (int, int, int);
struct months {
		char m_name[10];
		char shrt[3];
		int days;
		int num;
};

struct months month[12] = {
		{"january", "Jan", 31, 1},
		{"February", "Feb", 28, 2},
		{"March", "Mar", 31, 3},
		{"April", "Apr", 30, 4},
		{"May", "May", 31, 5},
		{"June", "Jun", 30, 6},
		{"July", "Jul", 31, 7},
		{"August", "Aug", 31, 8},
		{"September", "Sep", 30, 9},
		{"October", "Oct", 31, 10},
		{"November", "Nov", 30, 11},
		{"December", "Dec", 31, 12}
};
int main (void)
{
		int day;
		int mon;
		int year;
		int sum;
		printf ( "Please enter the month: format:(YYYY-MM-NN)" );
		scanf ( "%d-%d-%d", &year, &mon, &day );
		sum = tot_day (year, mon, day);
		printf ( "%d\n", sum );
		return 0;
}

int tot_day( int year, int mon, int day )
{
		int days = 0;
		int v_mon;
		if (( year % 4 == 0 && year % 100 != 0) || ( year % 100 == 0 &&
						year % 400 == 0 ))
				month[1].days = 29;
		for ( v_mon = 0; v_mon < mon - 1;v_mon++ )
				days += month[v_mon].days;
		days += day;
		return days;
}
