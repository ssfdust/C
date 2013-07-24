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
		char * fname;
		char * lname;
		int letters;
};

void getinfo (struct namect *);
void makeinfo (struct namect *);
void showinfo ( struct namect * );
void cleanup(struct namect * );

int main (void)
{
		struct namect person;

		getinfo(&person);
		makeinfo(&person);
		showinfo (&person);
		cleanup (&person);
		return 0;
}

void getinfo (struct namect * pst)
{
		char temp[81];
		printf ( "Please enter your first name.\n" );
		gets(temp);
		printf ( "Please enter your latter name.\n" );
		pst->fname = (char *) malloc ( strlen(temp) + 1 );
		strcpy ( pst -> fname, temp);
		gets(temp);
		pst->lname = (char *) malloc ( strlen(temp) + 1 );
		strcpy ( pst -> lname, temp);
}

void makeinfo ( struct namect * pst )
{
		pst->letters = strlen (pst->fname) + strlen(pst->lname);
}

void showinfo (struct namect * pst)
{
		printf ( "%s %s, your name contains %d letters.\n"
			  ,pst->fname , pst->lname, pst->letters );
}

void cleanup (struct namect * pst)
{
		free(pst->fname);
		free(pst->lname);
}
