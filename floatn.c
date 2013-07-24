#include <stdio.h>

int main (void)
{
	float number;
	printf ("Please enter a number:\n");
	scanf ("%f",&number);
	printf ("The input is %.1f or %.1e\n",number,number);
	printf ("The input is %+5.3f ot %.3E\n",number,number);
	return 0;
}
