#include <stdio.h>
#define WEEK 7

int main (void)
{
	int days,weeks,left;
	printf ("Please enter the number of days:\n");
	scanf ("%d",&days);
	weeks = days / WEEK;
	left = days % WEEK;
	printf ("%d days are %d weeks, %d days.\n",days,weeks,left);
	return 0;
}
