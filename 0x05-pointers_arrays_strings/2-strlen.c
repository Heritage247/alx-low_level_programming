#include "main.h"

/**
 * int _strlen - function that returns the length of a string
 * @s:string function to return
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\n')
	{
		lenght++;
		s++;
	}

	return (lenght);
