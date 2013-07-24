#include <stdio.h>

int main (void)
{
	char chter[26]="abcdefghijklmnopqrstuvwxyz";
	int num;
	printf ("Please enter the number:");
	scanf ("%d",&num);
	printf ("%c",chter[num]);
}
