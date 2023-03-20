#include "main.h"

/**
 * _strcat - appeding two strings together
 * @dest: string parameter
 * @src: string parameter
 *
 * Return: give the address of the dest string
*/
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
