#include <stdio.h>
#define TEN 10

int main (void)
{
	int number,times;
	times=-1;
	printf ("This program will print"
			"a succession of number\n"
			"Please enter a number:______\b\b\b\b\b\b");
	scanf ("%d",&number);
	while (times++<10)
		printf ("%5d",number+times);
	printf ("\n");
	return 0;
}
