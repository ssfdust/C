/*The program is to calculate the number 
  of water molecule that your kuatuo has.*/
#include <stdio.h>

int main ()
{
	int number; //The number of kuatuo that user enter.
	float result; //The result of water molecule
	printf ("Please enter the number of your kuatuo:\n");
	scanf ("%d",&number);
	result = number * 950.0f / 3.0e-23f;
	printf ("There is %.4e water molecules in your kuatuo.\n",result);
	return 0;
}
