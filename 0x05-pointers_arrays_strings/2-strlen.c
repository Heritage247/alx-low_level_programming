#include "main.h"

/**
 * int _strlen - function that returns the length of a string
 * @s:string function to return
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
