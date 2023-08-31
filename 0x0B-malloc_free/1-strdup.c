#include "main.h"

/**
 * _strdup -  returns a pointer to a newly
 *  allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *
 *  @str: string param
 *
 *  Return: ptr
 */

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *memo;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	memo = malloc(size * sizeof(*str) + 1);

	if (memo == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			memo[i] = str[i];
	}
	return (memo);
}
