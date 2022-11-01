include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed
 * @dest: a pointer to the memory area tp copy @src into.
 * @src: the source buffer to copy char from
 * @n: the number of bytes to copy from @src
 *
 * Return: a pointer to the destination buffer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
