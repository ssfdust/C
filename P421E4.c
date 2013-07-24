/*
 * =====================================================================================
 *
 *       Filename:  P421E4.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  2013-07-05 21:46:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#
struct social 
{
		long num;
		struct ful_name
		{
				char name[20];
				char surname[20];
				char mid[20];
		} fullnames;
};
void format (struct social arry[], int);
int main (void)
{
		struct social arry[5] = {
		{ 302039823, { "Dribble", "Flossie", "Miss"} },
		{ 203231232, { "Udsdads", "Tdasdas", "JIJI"} },
		{ 312312637, { "Odsadas", "Qdsdads", "Ikds"} },
		{ 312312312, { "Idadasd",.surname = "Rdsdads" } },
		{ 312312323, { "Qdsdasa", "Wdsdswe", "Edsd"} },
		{ 323232311, { "Zeratul", "Smith",   "Elen"} }
		};
		format(arry, 5);
}

void format (struct social arry[], int num )
{
		int i;
		for ( i = 0;i < num;i++ )
		{
				arry[i].fullnames.mid[1] = '.';
				arry[i].fullnames.mid[2] = '\0';
				printf ( "%s\n", arry[i].fullnames.mid );
		}
}

void format2 ( int num, char name[20], char mid[20], char surname[20] )
{
		printf ( "%s %s %s - %ld\n",  );

