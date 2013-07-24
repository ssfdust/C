/*
 * =====================================================================================
 *
 *       Filename:  macro1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/30/2013 10:37:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	PR_M printf ( "Have fun with all you have!\n" )			/*  */
#define	TWO 2			/*  */
#define	FOUR TWO * TWO			/*  */
#define	PR_X printf ( "X = %d",x )			/*  */
#define	S(X) (X) * (X)			/*  */
#define	DS(X,Y) int X ## Y  = Y			/*  */
#define	D int x = 3			/*  */
#define	PR_S(X,Y,...) printf ("SSS" #X "IS BEST! %d",Y __VA_ARGS__  )			/*  */
int main (void)
{
		int i = S(3 + 4);
		D;
		PR_M;
		PR_X;
		DS(x,5);
		printf ( "\n" );
		PR_S("naya",100);
		printf ( "\n" );
		printf ( "%d%d\n",i,x5,"sss" );
		printf ( "%d%4d%6d\n", FOUR, i, x5 );

}
