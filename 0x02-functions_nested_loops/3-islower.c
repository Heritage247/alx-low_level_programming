#include "main.c"

/**
* _islower - check in char is lowercase
* @c: char to be checked
* Return:1 if char is lowercase otherwise print 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
