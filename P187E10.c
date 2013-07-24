/*
 * =====================================================================================
 *
 *       Filename:  P187E10.c
 *
 *    Description:  Exercise 7-9
 *
 *        Version:  1.0
 *        Created:  02/05/2013 09:50:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	STDRT 0.15			/*  */
#define	OVERT 0.28			/*  */
#define	SINGLE 17850			/*  */
#define	HSHOLD 23900			/*  */
#define SHARE 29750				/*  */
#define	DESPRATE 14875			/*  */

void prt_f (void);
float switchf ( int num );

int main (void){
	int num;
	double first = 0.0;
	double p_first = 0.0;
	double tax;
	prt_f ();
	while ( scanf ( "%d",&num) == 1 && num != 5 ){
			first=switchf (num);
			if ( first == p_first )
					continue;
			p_first = first;
			printf ("%lf",first);
	}	
}

float switchf (int num){
	float first;
	switch ( num ){
			case 1:first = SINGLE;
				   break;
			case 2:first = HSHOLD;
				   break;
			case 3:first = SHARE;
				   break;
			case 4:first = DESPRATE;
				   break;
			default:printf ( "Plese enter a number between 1 and 5\n" );
					if ( scanf ("%d",&num) != 1 )
							break;
					first = switchf (num);
	}
	return first;
}
void prt_f (void){
		printf ( "\n" );
		printf ( "*************************************************************\n" );
		printf ( "Please select your kinds(select 5 to qiut): \n" );
		printf ( "1) SINGLE             2)Household\n");
		printf ( "3) Married,share      4)Married,divorce \n" );
		printf ( "*************************************************************\n" );
}
