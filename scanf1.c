#include <stdio.h>

int main (void)
{
	char f_name[20]; //The first name
	char s_name[20]; //The second name
	printf ("Please enter your full name:\n");
	scanf ("%s %s",f_name,s_name);
	printf ("Your name is %s,%s.\n",f_name,s_name);
	return 0;
}
