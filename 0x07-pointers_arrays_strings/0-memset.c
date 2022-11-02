#include "main.h"

/**
 * _memset - copy memory area
 * @s: pointer to the memory area to be filled
 * @c: the character to fill the memory area with
 * @n: the number of bytes to be filled
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /* add 1 position s*/
	}

	return (s);
}
