/*After I learn forth chapter,I use some new features to
  rewrite the program water which is to calculate the number
  of water molecules.*/

#include <stdio.h>
#define WATER_MASS 3.0e-23f
#define K_MASS 950.0f

int main (void)
{
	int number; /*The number of kuatuo you will enter*/
	printf ("Please enter your number of kuatuo:_______\b\b\b\b\b\b\b");
	scanf ("%d",&number);
	printf ("There are %e water molecules in your kuatuo.\n",number * K_MASS / WATER_MASS);
	return 0;
}
