#include "main.h"

/**
 * *leet - encodes a string into 1337
 *
 * @str: string to transform
 *
 * Return: transformed string
 */

char *leet(char *str)
{
	char *copy = str;
	char keys[] = {'A', 'E', 'O', 'T', 'L'};
	int values[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(keys) / sizeof(char); i++)
		{
			if (*str == keys[i] || *str == keys[i] + 32)
			{
				*str = 48 + values[i];
			}
		}
		str++;
	}

	return (copy);
}
