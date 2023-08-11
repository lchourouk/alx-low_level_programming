#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: lower bound
 * @max: higher bound
 *
 * Return: pointer to the new array or NULL
 */

int *array_range(int min, int max)
{
	int length, i;
	int *pointer;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	pointer = malloc(sizeof(int) * length);
	if (!pointer)
		return (NULL);
	for (i = 0; i < length; i++)
		pointer[i] = min++;
	return (pointer);
}
