#include <stdio.h>
#include <string.h>
#define MORE 3

int main (void)
{
	char name[15];
	int str;
	printf ("Please enter your name:\n");
	scanf ("%s",name);
	printf ("\"%s\"\n",name);
	printf ("\"%20s\"\n",name);
	printf ("\"%-20s\"\n",name);
	str=strlen(name)+MORE;
	printf ("\"%*s\"\n",str,name);
	return 0;
}

