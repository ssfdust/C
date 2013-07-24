/*
 * =====================================================================================
 *
 *       Filename:  P211E4.c
 *
 *    Description:  Exercises
 *
 *        Version:  1.0
 *        Created:  03/03/2013 09:39:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main (void){
		char ch;
		double wd_num = 0.0;
		double al_num = 0.0;
		bool word;
		
		printf ( "Please enter some paras\n" );
		while ((ch =getchar()) != EOF){
				if ( isalpha(ch) && !word){
						wd_num++;
						word = 1;
				}
				if ( isalpha(ch))
						al_num++;
				else
						word = 0;
		}
		printf ( "\nThere are %.0lf words.The average of alphts are %.0lf.\n" , wd_num, al_num / wd_num);
		return 0;
}
