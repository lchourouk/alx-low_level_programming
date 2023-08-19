#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array.
  * @array: array
  * @size: size of the array
  * @action: ptr to the function
  *
  * Return: ...
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action && size)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
