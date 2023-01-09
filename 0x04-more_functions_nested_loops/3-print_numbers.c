#include "main.h"

/**
 * print_numbers - prints 0123456789
 *
 * Return: void
*/

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
