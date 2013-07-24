/*
 * =====================================================================================
 *
 *       Filename:  P211E7.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  03/05/2013 05:24:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void menu (void);
float cal (float f_num,char opt,float s_num);
void check ();
void pt_menu (void);

int main (void){
		char opt;
		float f_num;
		float s_num;

		pt_menu();
		while ((opt=getchar()) != 'q'){
				printf ( "Enter the first number:" );
				while ((scanf ( "%f", &f_num )) != 1){
						printf ( "%c is not a number.\n",(char)f_num );
						printf ( "Please enter a number such as 2.5,-1.78E8,or 3:\n" );
				}

				printf ( "Enter the second number:" );
				while ((scanf ( "%f", &s_num )) != 1){
						printf ( "%c is not a number.\n",(char)s_num );
						printf ( "Please enter a number such as 2.5,-1.78E8,or 3:\n" );

				}

				cal (f_num,opt,s_num);
				pt_menu ();
		}
		
}

float cal (float f_num,char opt,float s_num){
		float answer;
		switch (opt){
				case 'a':
						answer = f_num + s_num;
						opt = '+';
						break;
				case 'b':
						answer = f_num - s_num;
						opt = '-';
						break;
				case 'c':
						answer = f_num * s_num;
						opt = '*';
						break;
				case 'd':
						answer = f_num / s_num;
						opt = '/';
						break;
				default:
						printf ( "Please make correct section\n" );

		}
		printf ( "%f %c %f = %f\n" , f_num , opt , s_num,answer);
}

void pt_menu (void){
		printf ( "Enter the operation of your choice:\n" );
		printf ( "a .add            s. subtract\n" );
		printf ( "m. multiply         d. divide\n" );
		printf ( "q, quit\n" );
}
