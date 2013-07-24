/*
 * =====================================================================================
 *
 *       Filename:  P186E3.c
 *
 *    Description:  Exercise 3 On Page 186
 *
 *        Version:  1.0
 *        Created:  01/20/2013 02:03:33 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
#define	STOP 0		      	//定义终止变量
int main (void)
{
	int     in=1;           //定义读取变量,防止在循环开始处停止所以设成了1
	int en_num=0;           //偶数总量
	float rel_en=0.0;           //偶数之和
	float a_en=0.0;         //偶数的平均值
	int od_num=0;           //奇数总量
	float rel_od=0.0;           //奇数之和
	float a_od=0.0;         //奇数平均值

	while (in!=STOP){
			scanf("%d",&in);
			if ((in % 2 == 0) ){   /*调用ctype函数判断是否为数字,*/
					en_num++;        //偶数总量+1
					rel_en+=in;      //偶数之和
			}
			else {   //奇数判断
					od_num++;
					rel_od+=in;
			}
	}

	a_en = rel_en / en_num;          //计算偶数平均值
	a_od = rel_od / od_num;          //计算奇数平均值
	printf ("number of even:%d num of odd:%d\n",en_num,od_num);
	printf ("average of even:%.2f average of ood:%.2f",a_en,a_od);

}
