#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * follow by a new line except q and e
 * Reture: always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
