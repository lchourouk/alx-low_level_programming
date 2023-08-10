#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: int param
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);

	if (memory == 0)
		exit(98);
	return (memory);
}
