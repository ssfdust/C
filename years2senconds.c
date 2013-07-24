#include <stdio.h>

int main ()
{
	float sens_output;
	int ages;
	printf ("Please enter your age:\n");
	scanf ("%d",&ages);
	sens_output=ages*3.156e7f;
	printf ("You have lived for %e senconds.\n",sens_output);
	return 0;
}
