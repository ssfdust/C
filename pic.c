#include <stdio.h>
#define ROWS 6
#define CHARS 6

int main (void)
{
	int row,ch;
	for (row=1;row < ROWS;row++)
	{
		for (ch=0;ch < row;ch++)
			printf ("$");
		printf ("\n");
	}
}
