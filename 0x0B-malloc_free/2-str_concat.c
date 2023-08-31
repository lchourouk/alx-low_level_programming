#include "main.h"

/**
 * _strlen - gets string length
 *
 * @s: string param
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: string1
 * @s2: string2
 *
 * Return: ptr to concatenated string/NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *memo;
	int i = 0, size;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size = _strlen(s1) + _strlen(s2);
	memo = malloc(size * sizeof(char) + 1);
	if (memo == 0)
		return (0);
	while (s1[i] != '\0')
	{
		memo[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		memo[i + _strlen(s1)] = s2[i];
		i++;
	}

	memo[i + _strlen(s1) + 1] = '\0';
	return (memo);
}
