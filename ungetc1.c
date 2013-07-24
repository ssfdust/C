/*
 * =====================================================================================
 *
 *       Filename:  ungetc1.c
 *
 *    Description:  Test
 *
 *        Version:  1.0
 *        Created:  07/23/2013 10:16:09 AM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  StarDust , ssfdust@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main (void)
{
		char ch;
		int i = 0;
		while ( i < 10 )
		{
				i++;
				ch = getchar();
		}
		putchar(ch);
		//第一次输出ch;
		//此时，缓冲区应该被清空。
		printf ( "\n" );
		ungetc( ch, stdin);
		ungetc( ch, stdin);
		//照我的理解来说ch应该没有退回去
		ch = getchar();
		//应该会请求输入
		putchar(ch);
		printf ( "\n" );
		ch = getchar();
		//应该会请求输入
		//新增一个getchar。
		ch = getchar();
		putchar(ch);
		return 0;
}
