#include "main.h"

/**
 * print_line - printing line in the terminal
 * @n: number of times
 *
 * Return: Nothing
*/

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
