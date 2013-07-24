#include <stdio.h>

int main (void)
{
	float number;
	printf ("Please enter a number:\n");
	scanf ("%f",&number);
	printf ("The input is %f or %e.\n",number,number);
	return 0;
}

