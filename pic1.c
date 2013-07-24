#include <stdio.h>
#define HANGS 7
#define ZIS 7

int main ()
{
	int hang,lie;
	char ch;
	for (hang=1;hang < HANGS;hang++)
	{
		for (ch='F',lie=0;lie < hang;lie++)
			printf ( "%c",ch-lie);
		printf ("\n");
	}
	return 0;
}
