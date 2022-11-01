#include "main.h"

/**
 * _memset - copy memory area
 * @s: a pointer to the memory area to be filled
 * @c: the character to fill the memory area with
 * @n: the number of bytes to be filled
 * description _memset: over there
 * Return: memory area replaced
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
