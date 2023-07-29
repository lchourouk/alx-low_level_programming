#include "main.h"

/**
 * *rot13 - rot13 transformation
 *
 * @s: string to transform
 *
 * Return: transformed string
 */

char *rot13(char *s)
{
	int i;

	char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == abc[i])
			{
				*s = rot13[i];
				break;
			}
		}
		s++;
	}

	return (ptr);
}
