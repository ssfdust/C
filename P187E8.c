/*
 * =====================================================================================
 *
 *       Filename:  P187E8.c
 *
 *    Description:  Exercise 7-8
 *
 *        Version:  1.0
 *        Created:  02/05/2013 04:08:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	INCOME_1 8.75			/*  */
#define	INCOME_2 9.33			/*  */
#define	INCOME_3 10.00			/*  */
#define	INCOME_4 11.20			/*  */
#define	TAX_R1   0.15			/*  */
#define	TAX_R2   0.2			/*  */
#define	TAX_R3   0.25			/*  */

int prt_tit (void);

int main (void){
		int num = 0;
		float hours = 0.0;
		float income = 0.0;
		float total = 0.0;
		float net_total = 0.0;
		float tax = 0.0;

		prt_tit ();
		while ( (scanf ( "%d", &num ) == 1) && num != 5 ){
		fault:		switch ( num ){
						case 1:income = INCOME_1;
							   break;
						case 2:income = INCOME_2;
							   break;
						case 3:income = INCOME_3;
							   break;
						case 4:income = INCOME_4;
							   break;
						default:printf ( "Please enter the correct number\n" );
								scanf ( "%d", &num );
								goto fault;
				}
				printf ( "Please enter your work hours:____\b\b\b\b" );
				scanf ( "%f", &hours );
				if ( hours > 40 )
						hours = ( hours - 40 ) * 1.5 + 40;
			    total = income * hours;
				if ( total < 300 )
				{
						tax = total * TAX_R1;
						net_total = total - tax;
				}
				else if ( ( total > 300 ) && ( total < 450 ) ) {
						tax = 300 * TAX_R1 + ( total - 300 ) * TAX_R2;
						net_total = total - tax;
								}
				else {
						tax = 300 * TAX_R1 + 150 * TAX_R2 + ( total - 450 ) * TAX_R3;
						net_total = total - tax;
				}
				printf ( "Your total wage is %.2f.\n" , total );
				printf ( "Your net wage is %.2f and your tax is %.2f.\n", net_total,tax );
				printf ( "%f\n" , hours );
				prt_tit ();
		}
}
int prt_tit (void){
		printf ( "*********************************\n" );
		printf ( "\n" );
		printf ( "Enter the number corresponding to the desired pay \
rate or action:\n" );
		printf ( "1) $8.75/hr                       2) $9.33/hr\n" );
		printf ( "3) $10.00/hr                      4) $11.20/hr\n" );
		printf ( "5) quit\n" );
		printf ( "*********************************\n" );
}
