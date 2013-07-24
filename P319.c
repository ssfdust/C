/*
 * =====================================================================================
 *
 *       Filename:  P319E3.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  04/01/2013 09:23:12 PM
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
#include <ctype.h>
#define	N 100			/*  */
void rdstr (char * ar,int n);
void rdwd  (char * ar);
char * scfct (char * target, char * ar);
int main (void)
{
		char ar[4] = "asa";
		char br[72] = "ffasgasagg";
		char * a = scfct (ar, br);
		printf ( "%s\n", a );
}

char * scfct (char * target, char * ar)
{
		int i = 0,j = 0;
		while ( ar[i++])
		{
				if ( target[0] == ar[i])
						while ( target[j])
						{
								if ( target[j] != ar[i])
								{
										j = 0;
										break;
								}
								j++;
								i++;
								if ( j == 3)
										return target;
						}
		}
		return NULL;
}
void rdwd  (char * ar)
{
		char ch;

		while (!isalpha(ch = getchar()));
		*ar++ = ch;
		while (isalpha (ch = getchar()))
		{
				*ar++ = ch; 
		}
}

void rdstr (char * ar,int n)
{
		char ch,i = 0;
		ch = ' ';
		bool w;

		while ((w = !isspace(ch=getchar())) && i < n) {
				*ar++ = ch;
				i++;
		}

}
