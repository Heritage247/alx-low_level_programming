#include "main.h"

/**
 * int _abs - computes the absolute value of an integer
 * @n: the integer we are lookig for
 * Return: absolute value of the integer
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}