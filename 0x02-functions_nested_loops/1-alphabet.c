#include"main.h"

/*
 * print_alphabet - prints the alphabets a -z
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Returns the characters in lowercase
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
