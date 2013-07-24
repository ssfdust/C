/*The program is to test int out
  written in C.First,I don't know
  how large my int is.so I use sizeof
  function first.*/

/*Program start*/
#include <stdio.h>
#include <inttypes.h>
#define FLT_MIN __FLT_MIN__
#define FLT_MAX __FLT_MAX__

void bytes (void); /*the function to output how large the type is*/
void overflow (void); /*the function to excute*/
int main (void)
{
	bytes ();
	overflow ();
	return 0;
}

void bytes (void)
{
	printf ("Type int has a size of %d bytes.\n",sizeof(int));
	printf ("Type long has a size of %d bytes.\n",sizeof(long));
	printf ("Type short has a size of %d bytes.\n",sizeof(short));
	printf ("Type char has a size of %d bytes.\n",sizeof(char));
	printf ("Type float has a size of %d bytes.\n",sizeof(float));
	printf ("Type uint16_t has a size of %d bytes.\n",sizeof(uint16_t));
	printf ("Type uint8_t has a size of %d bytes.\n",sizeof(uint8_t));
	printf ("Type int_least8_t has a size of %d bytes.\n",sizeof(int_least8_t));
}

void overflow (void)
{
	unsigned _uintt;
	uint8_t _uint8;
	uint16_t _uint16;
	int_least8_t _int_least8_t;
	float floattype;
	printf ("\aPlease enter the size of type int:");
	scanf ("%u",&_uintt);
	printf ("%u %u %u\n",_uintt,_uintt+1,_uintt+2);
	printf ("Please enter the size of type uint8_t:");
	scanf ("%u",&_uint8);
	printf ("%u %u %u\n",_uint8,_uint8+1,_uint8+2);
	printf ("Please enter the size of type uint16_t:");
	scanf ("%u",&_uint16);
	printf ("%u %u %u\n",_uint16,_uint16+1,_uint16+2);
	printf ("lose bug %u %u\n",_uint8);
	printf ("This is up overflow experiment:\n");
	floattype = FLT_MAX;
	printf ("%e %e %e\n",floattype,floattype*100.0f,floattype*100000.0f);
	printf ("This is down overflow experiment:\n");
	floattype = FLT_MIN;
	printf ("%e %e %e\n",floattype,floattype/100.0f,floattype/1000000.0f);
}
