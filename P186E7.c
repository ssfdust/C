/*
 * =====================================================================================
 *
 *       Filename:  P186E7.c
 *
 *    Description:  Exercise 7-7
 *
 *        Version:  1.0
 *        Created:  02/05/2013 02:35:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	INCOME 10			/*  */
#define	TIME 1.5			/*  */
#define	TAX_R1 0.15			/*  */
#define	TAX_R2 0.2			/*  */
#define	TAX_R3 0.25			/*  */

int main (void){
		int hours=0;
		float total=0.0;
		float net_total=0.0;
		float tax=0.0;
		int ck=0;
		printf ( "Please enter your work hours:____\b\b\b\b" );
		scanf ( "%d", &hours );
		if ( hours > 40 ){
				hours = ( hours - 40 ) * TIME + 40;
		}
		total = INCOME * hours;
		if ( total < 300 ){
				tax = total * TAX_R1;
				net_total = total - tax;
		}
		else if ( ( total > 300 ) && ( total < 450 ) ){
				tax = 300 * TAX_R1 + ( total - 300 ) * TAX_R2;
			   	net_total = total -tax;
		}
		else {
				tax = 300 * TAX_R1 + 150 * TAX_R2 + ( total - 450 ) * TAX_R3;
				net_total = total - tax;
		}
		printf ( "Your total wage is %.2f\n",total );
		printf ( "Your net wage is %.2f and your tax is %.2f.\n",net_total,tax );
}
