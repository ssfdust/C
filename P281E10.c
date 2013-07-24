/*
 * =====================================================================================
 *
 *       Filename:  P281E10.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/18/2013 03:13:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "P281.h"

int main (void){
		int ar[3][5] = {
				{1,2,3,4,5},
				{1,2,3,4,5},
				{2,3,4,5,6},
		};

		show_ar (3, 5, ar);
		raise ( 3, 5, ar);
		show_ar (3, 5, ar);
}
