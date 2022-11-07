#include "main.h"

/**
 * set_string - the value of a pointer to a char
 * @s: the pointer
 * @to: string char we want to point to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
