#include<stdio.h>

/*
 *  main - Entry point
 *
 *  Description: print all aplhabet letters except q and e
 *
 *   Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{

		putchar(ch);
		++ch;

	}

	putchar('\n');

	return (0);
}
