#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string1
 * @s2: string2
 *
 * Return: 1 true , 0 false
 */

int _strcmp(char *s1, char *s2)
{
	int same = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			same = ((int)*s1 - 48) - ((int) *s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (same);
}
