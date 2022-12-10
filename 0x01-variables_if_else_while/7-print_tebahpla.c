#include<stdio.h>

/* 
 * main-Entry point
 *
 * Description:program that prints the lowercase alphabet in reverse
 *
 * Return : lways 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
	        --ch;
	}

	putchar('\n');

	return (0);
}
