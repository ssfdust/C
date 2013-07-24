#include <stdio.h>

int main()
{
		unsigned long ptr;
		int * ph;
		int pooh;
		pooh = 100;
		ptr = & pooh;
		ph = & pooh;
		printf ( "%d %ld %p %p\n",pooh,ptr,ptr,ph );
}

