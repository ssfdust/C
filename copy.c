/*
 * =====================================================================================
 *
 *       Filename:  names.c
 *
 *    Description:  Exercise
 *
 *        Version:  1.0
 *        Created:  06/11/2013 03:25:40 PM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  StarDust , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

struct namect {
		char fname[20];
		char lname[20];
		int letters;
};

struct namect getinfo (void);
struct namect makeinfo (struct namect);
void showinfo ( struct namect );

int main (void)
{
		struct namect person;

		person = getinfo();
		person = makeinfo(person);
		showinfo (person);
		return 0;
}

struct namect getinfo (void)
{
		struct namect temp;
		printf ( "Please enter your first name.\n" );
		gets(temp.fname);
		printf ( "Please enter your latter name.\n" );
		gets(temp.lname);
		return temp;
}

struct namect makeinfo ( struct namect info )
{
		info.letters = strlen (info.lname) + strlen(info.fname);
		return info;
}

void showinfo (struct namect info)
{
		printf ( "%s %s, your name contains %d letters.\n"
			  ,info.fname, info.lname, info.letters );
}
