#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: int param
 * @height: int param
 *
 * Return: ptr to array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr2D;

	arr2D = malloc(sizeof(*arr2D) * height);
	if (width <= 0 || height <= 0 || arr2D == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr2D[i] = malloc(sizeof(**arr2D) * width);
		if (arr2D[i] == 0)
		{
			while (i--)
				free(arr2D[i]);
			free(arr2D);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr2D[i][j] = 0;
	}
	return (arr2D);
}
