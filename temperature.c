#include <stdio.h>

void temperature (double temp);
int main (void)
{
	float temp;
	int status=1;
	printf ("Please enter the temperature:");
	scanf ("%lf",$temp);
	while (status==1)
	{
	temperature (temp);
	status=scanf ("%lf",&temp);
	}
}
void temperature (double temp)
{
	double fahrenheit,celsius,kelvin;
	const double TIME=1.8;
	const double UP=32.0;
	const double ZERO=273.16;
	fahrenheit=temp;
	printf ("%f,%f,%f",temp,fahrenheit,ZERO);
	celsius=TIME * fahrenheit + UP;
	kelvin = celsius + ZERO;
	printf ("%.2fC %.2fF %.2fK\n",celsius,fahrenheit,kelvin);
}
