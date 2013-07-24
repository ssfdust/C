/*
 * =====================================================================================
 *
 *       Filename:  P187E5.c
 *
 *    Description:  EXercise
 *
 *        Version:  1.0
 *        Created:  01/31/2013 11:38:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>
			/*  */
int main (void)
{
	int num=0;
	int ck=0;
	int odd=0;
	int even=0;
	while (  scanf ( "%d", &num )==1 && num != 0 ){
		ck = num % 2;	
		switch (ck){
			case 0:
				even++;
				break;
			case 1:
				odd++;
				break;
		}
	}
	printf ( "evens : %d   odds : %d \n",even,odd );

}
