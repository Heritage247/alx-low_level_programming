#include "main.h"

/**
 * _abs  - computes the absolute value of an integer.
 * @c: the integer we are lookig for.
 * Return: absolute value of the integer or zero.
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
