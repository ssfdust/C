/*
 * =====================================================================================
 *
 *       Filename:  P319E10.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  05/04/2013 08:05:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define NUM 81
#define STR 10
/* Five function assignment */
void prt_ascii ( char *ar[], int n );
void prt_orgi  ( char *ar[], int n );
void prt_high  ( char *ar[], int n );
void menu ();
void sp_prt ( char *ar[], int n );

int main (void)
{
		int i;
		int opt;
		char ar[STR][NUM];
		char * pstr[STR];

		printf ( "Please enter 10 sentences or EOF to end typing:\n" );
		for ( i = 0;i < STR;i++ )
		{
				if ( gets(ar[i]) == NULL && ar[i][0] == EOF )
						break;
				else
						pstr[i] = ar[i];
		}
		menu ();
		while ( scanf ( "%d", &opt ) == 1 && opt != 5 )
		{
				switch (opt)
				{
						case 1:
								prt_orgi ( pstr, i );
								break;
						case 2:
								prt_ascii ( pstr, i );
								break;
						case 3:
								prt_high ( pstr, i  );
								break;
						case 4:
								sp_prt    ( pstr, i );
								break;
						default:
								puts ("\n\nPlease enter the right number:\n\n");
				}
				menu ();
		}

		return 0;
		
}

void prt_orgi ( char *ar[], int n )
{
		int i;
		for ( i = 0;i < n;i++ )
				puts (ar[i]);
}
void prt_ascii ( char *ar[], int n )
{
		char * temp;
		int top,seek;
		for ( top = 0;top < n - 1;top++ )
				for ( seek = top + 1;seek < n;seek++)
						if ( strcmp(ar[seek],ar[top]) > 0 )
						{
								temp = ar[top];
								ar[top] = ar[seek];
								ar[seek] = temp;
						}
}
void prt_high  ( char *ar[], int n )
{
		char * temp;
		int top,seek;

		for ( top = 0;top < n - 1;top++ )
				for ( seek = top + 1;seek < n;seek++ )
						if ( strlen(ar[top]) > strlen(ar[seek]) )
						{
								temp = ar[top];
								ar[top] = ar[seek];
								ar[seek] = temp;
						}
}
void sp_prt ( char *ar[], int n )
{
		int length = strlen(ar[0]);
		int i;
		char temp[NUM];
		for ( i = 0;i < n;i++ )
		{
				strncpy(temp, *ar[i], length);
				temp[i+1] = '\0';
				puts (temp);
		}
}
void menu()
{
		printf ( "**************************************************************\n" );
		printf ( "Please select a chooice\n" );
		printf ( "1) print the orig strings    2) sort strings via ascii   3) sort strings with length \n" );
		printf ( "4) print the strings with the length of the first string  5) quit\n" );
		printf ( "**************************************************************\n" );
}
