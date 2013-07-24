#include <stdio.h>
#define ROUND 60

int main ()
{
	int min,hour,left;
	printf ("THis program can convert"
			 "minute to hour.\n"
			 "Please enter a number of minutes.\n"
			 "Enter 0 or any number less than 0 to"
			 "end the program\n");
	scanf ("%d",&min);
	while ( min > 0)
	{
		hour=min / ROUND;
		left= min % ROUND;
		printf ("%d min is %d h and %d min\n",
				min,hour,left);
		printf ("Enter a new number\n");
		scanf ("%d",&min);
	}
	return 0;
}
