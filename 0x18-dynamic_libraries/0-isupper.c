#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: parameter in the function
 *
 * Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
