#include <stdio.h>

int main (void)
{
	char word[40];
	int num;
	printf ("Please enter a word:");
	scanf ("%s",word);
	num=strlen(word);
	for (;num+1!=0;num--)
		printf ("%c",word[num]);
	printf ("\n");
	return 0;
}
