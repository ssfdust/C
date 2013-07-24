/*
 * =====================================================================================
 *
 *       Filename:  P421E5.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  07/06/2013 08:34:24 PM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  StarDust , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define	CSIZE 4			/*  */
#define	SIZE 10			/*  */
#define	SBJN 3			/*  */

struct name {
		char name[SIZE];
		char surname[SIZE];
};

struct student {
		struct name names;
		float grades[SBJN];
		float average;
};
float average (struct student *, int num);
int main ( void )
{
		struct student students[CSIZE] = {
				{{"David", "Elenin"}},
				{{"Zeratul", "Smith"}},
				{{"Tassdar", "Taro"}},
				{{"Harry", "Potter"}},
		};
		struct student * ptr = &students[0];
		int num;

		printf ( "Plese enter the scores for each student.\n" );
		for (num = 0;num < CSIZE;num++)
		{
				printf ( "Name: %s %s ", students[num].names.name, students[num].names.surname );
				scanf ( "%f%f%f", &students[num].grades[0], &students[num].grades[1], &students[num].grades[2]);
		}
		average(ptr, CSIZE);
		printf ( "+++++++++++++++++++++++++++++++++++++++++\n" );
		for (num = 0;num < CSIZE;num++)
		{
				printf ( "Name: %s %s Score: %6.2f %6.2f %6.2f Average:%6.2f\n", students[num].names.name, students[num].names.surname, students[num].grades[0], students[num].grades[1], students[num].grades[2], students[num].average );
				printf ( "+++++++++++++++++++++++++++++++++++++++++\n" );
		}
}

float average (struct student * ptr, int num)
{
		int i;
		float aver;
		for (i = 0;i < num;i++)
		{
				aver = ( (ptr + i)->grades[0] + (ptr + i)->grades[1] + (ptr + i)->grades[2] ) / SBJN;
				ptr[i].average = aver;
		}
		return aver;
}
