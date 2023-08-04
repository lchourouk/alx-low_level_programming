#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination param
 * @src: source param
 * @n: number of bytes
 *
 * Return: concatenated srings
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	a = 0;
	while (dest[a])
		a++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[a + i] = src[i];
	dest[a + i] = '\0';

	return (dest);
}
