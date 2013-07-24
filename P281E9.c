/*
 * =====================================================================================
 *
 *       Filename:  P281E9.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/18/2013 02:51:04 PM
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
		int ar1[4] = {2, 4, 5, 8};
		int ar2[4] = {1, 0, 4, 6};
		int ar3[4];

		sub_ar (ar1, ar2, ar3, 4);
		printf ( "%3d",ar3[3] );
}
