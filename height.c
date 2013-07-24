/*this program is to translate your height in inch into in centimeter*/

#include <stdio.h>

int main (void)
{
	float height_inch;
	printf ("Please enter your height in inch:\n");
	scanf ("%f",&height_inch);
	printf ("Your height in centimetres is %.3f.\n",height_inch * 2.45f);
	return 0;
}
