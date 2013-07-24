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

int tot_day (char *);
struct months {
		char m_name[10];
		char shrt[3];
		int days;
		int num;
};

const struct months month[12] = {
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
		int days;
		char mon[9];
		printf ( "Please enter the month:" );
		scanf ( "%s", mon );
		days = tot_day ( mon);
		printf ( "%d\n", days );
		return 0;
}

int tot_day( char * mon )
{
		int days = 0;
		int e_mon;
		int v_mon;
		for ( int i = 0;i < 12;i++)
				if ( strcmp( mon, month[i].m_name ) == 0 )
				{
						e_mon = month[i].num;
						break;
				}
		for ( v_mon = 0; v_mon <= e_mon - 1;v_mon++ )
				days += month[v_mon].days;
		return days;
}
