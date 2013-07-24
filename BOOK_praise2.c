/*praise2.c*/

#include <stdio.h>
#include <string.h>
#define PRAISE "what a super marvelous name!"

int main ()
{
	char name[40];

	printf ("what's your name?\n");
	scanf ("%s,name");
	printf ("Hello, %s. %s\n",name,PRAISE);
	printf ("Your name of %d letter s 
