/*
 * =====================================================================================
 *
 *       Filename:  P319E7.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  04/13/2013 11:57:19 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
char * string_in (const char * s1,const char * s2);
int main (void)
{
		char * ar1 = "I am a student";
		char * ar2 = "I love you forever";
		char * sch = "ou";
		char * s1;
		char * s2;
		char * s3;

		s1 = string_in (ar1, sch);
		s2 = string_in (ar2, sch);
		puts(s1);
		puts(s2);
		return 0;
}

char * string_in (const char * s1, const char * s2)
{
		int l2 = strlen (s2);
		int tries;
		int nomatch = 1;

		tries = strlen (s1) + 1 - l2;
		if ( tries > 0)
				while ( ( nomatch = strncmp (s1, s2, l2) && tries--))
								s1++;
		if (nomatch)
				return NULL;
		else 
				return ( char *) s1;
								

}

