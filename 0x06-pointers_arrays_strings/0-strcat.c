#include "main.h"

/**
 * _strcat-function that concatenates strings
 * @dest: pointer to destination pointer
 * @src: pointer to the source input
 *
 * Return: pointer to resulting string @dest
*/
char *_strcst(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
