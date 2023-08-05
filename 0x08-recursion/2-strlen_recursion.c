#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: string param
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}

	return (i);
}
