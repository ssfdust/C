#include <stdio.h>

int main (void)
{
	int age,days;
	printf ("Please enter your age;\n");
	scanf ("%d",&age);
	days = 365 * age;
	printf ("My age is %d and I have lived for %d days. \n",age,days);
	return 0;
}
