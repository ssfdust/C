#include <stdio.h>

int main (void)
{
	int num,max,min;
	double num_2,num_3;
	printf ("Please enter the max and the min:");
	scanf ("%d %d",&max,&min);
	for (num=min;num <= max;num++)
	{
		num_2=num*num;
		num_3=num*num*num;
		printf ("%6d %12.2e %12.2e\n",num,num_2,num_3);
	}
	return 0;
}
