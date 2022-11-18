#include <stdlib.h>
#include "function_pointer.h"

/**
 * print_name - prints a name
 * @name: name of print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
