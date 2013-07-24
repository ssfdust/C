#include <stdio.h>

int main (void)
{
	int count,sum,time,day;
	sum=0,day=0;
	printf ("Please input the number of days:");
	scanf ("%d",&time);
	while (day++ < time)
	{
		printf ("The money you own on %d day:",day);
		scanf ("%d",&count);
		sum += count*count;
	}
	printf ("Yu have owned $%d.\n",sum,day);
	return 0;
}
