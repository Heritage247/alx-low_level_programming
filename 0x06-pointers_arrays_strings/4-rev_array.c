#include "main.h"

/**
 * reverse_array - unction that reverses the content of an array of integers
 * @a: array
 * @n: number of element of the array
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{

		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

