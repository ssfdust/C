/*
 * =====================================================================================
 *
 *       Filename:  P352E8.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/27/2013 11:47:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int * make_array (int elem, int val);
void show_array (const int ar[], int n);
int main (void)
{
		int * pa;
		int size;
		int value;

		printf ( "Enter the number of elements:\n" );
		scanf ( "%d", &size );
		while ( size > 0 ) {
				printf ( "Enter the initialization value:\n" );
				scanf ( "%d", &value );
				pa = make_array(size, value);
				if ( pa )
				{
						show_array(pa,size);
						free (pa);
				}
				printf ( "Enter the number of elements (<1 to quit):\n" );
				scanf ( "%d", &size );
		}
		printf ( "Done.\n" );
		return 0;
}
