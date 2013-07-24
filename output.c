#include <stdio.h>

void out1 (void);
void out2 (void);

int main (void)
{
	out1 ();
	out1 ();
	out1 ();
	out2 ();
	return 0;
}

void out1 (void)
{
	printf ("For he's a jolly good fellow!\n");
}

void out2 (void)
{
	printf ("Which nobody can deny!\n");
}
