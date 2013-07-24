#include <stdio.h>
#define SPA 32

int main (void)
{
	char al;
	int row,rows,ch,chs,spa,spac;
	printf ("Please enter an alphter:");
	scanf ("%c",&al);
	printf ("\n\n");
	rows = al - 'A'+ 1;
	for ( row=0;row < rows;row++)
	{
		for (spa=rows-row-1,spac=0;spac < spa;spac++)
			printf ("%c",SPA);
		for (ch='A';ch < 'A' + row;ch++)
			printf ("%c",ch);
		for (;ch + 1 != 'A';ch--)
			printf ("%c",ch);
		printf ("\n");
	}
}
