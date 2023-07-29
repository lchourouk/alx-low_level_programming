#include "main.h"
#include <stdio.h>


/**
 * isLower - checks if char is lower case
 * @c: char to check
 *
 * Return: 1 true, 0 false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - checks speciam delimiters
 * @d: delimiter
 *
 * Return: 1 true , 0 false
 */

int isDelimiter(char d)
{
	int i;
	char delimiters[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (d == delimiters[i])
			return (1);
	return (0);
}



/**
 * *cap_string - capitalizes all words of a string
 *
 * @str: string to  transform
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimiter = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			foundDelimiter = 1;
		else if (isLower(*str) && foundDelimiter)
		{
			*str -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		str++;
	}

	return (ptr);
}
