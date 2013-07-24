#include <stdio.h>
#include <float.h>

int main (void)
{
	double dou=1.0/3.0;
	float flo=1.0/3.0;
	printf ("double %.4f %.12f %.16f\n",dou,dou,dou);
	printf ("float %.4f %.12f %.16f\n",flo,flo,flo);
	printf ("FLT_DIG is %f.\n",FLT_DIG);
	printf ("DBL_DIG is %f.\n",DBL_DIG);
	return 0;
}
	
