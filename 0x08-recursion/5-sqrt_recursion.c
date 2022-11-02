#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * @i: iterator
 * Return: a number
 */

int _sqrt_recursion(int n, int i)
{
	int squre = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
