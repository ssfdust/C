/*
 * =====================================================================================
 *
 *       Filename:  P351E2.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/26/2013 10:01:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main ( void )
{
		int mode;

		printf ( "Enter 0 for metric mode, 1 for US mode:\n" );
		scanf ( "%d", &mode );

		while ( mode >= 0 ) {
				set_mode (mode);
				get_info ();
				show_info ();
				printf ( "Enter 0 for metric mode, 1 for US mode:\n" );
				scanf ( "%d", &mode );
		}
		printf ( "Done.\n" );
		return 0;
}

void set_mode ( int mode )
{
		if ( mode == 1 )

}
