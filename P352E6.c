/*
 * =====================================================================================
 *
 *       Filename:  P352E6.c
 *
 *    Description:  Exercisr
 *
 *        Version:  1.0
 *        Created:  05/26/2013 10:44:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dust Piao , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <time.h>
static unsigned long int next = 1;
void srand1(unsigned int seed);
int rand1(void);
int main (void)
{
		int i,j;
		int ar[1000];
		int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0,num6 = 0,num7 = 0,num8 = 0,num9 = 0, num10 = 0;
		srand1( (unsigned int) time(0));

		for ( i = 0;i < 1000;i++ )
				ar[i] = rand1() + 1;
		for ( i = 0;i < 1000;i++ )
		{
				switch (ar[i])
				{
						case 1:num1++;
							   break;
						case 2:num2++;
							   break;
						case 3:num3++;
							   break;
						case 4:num4++;
							   break;
						case 5:num5++;
							   break;
						case 6:num6++;
							   break;
						case 7:num7++;
							   break;
						case 8:num8++;
							   break;
						case 9:num9++;
							   break;
						case 10:num10++;
								break;
				}
		}
		printf ( "1:%d\n",num1 );
		printf ( "2:%d\n",num2 );
		printf ( "3:%d\n",num3 );
		printf ( "4:%d\n",num4 );
		printf ( "5:%d\n",num5 );
		printf ( "6:%d\n",num6 );
		printf ( "7:%d\n",num7 );
		printf ( "8:%d\n",num8 );
		printf ( "9:%d\n",num9 );
		printf ( "10:%d\n",num10 );
		return 0;
}
int rand1( void )
{
		next = next * 1103515245 + 12345;
		return (unsigned int) (next / 65536) % 10;
}
void srand1 ( unsigned int seed )
{
		next = seed;
}

