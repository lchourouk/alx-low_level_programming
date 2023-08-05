#include "main.h"

/**
 * _pow_recursion - calculates x pow y
 *
 * @x: int param
 * @y: int param
 *
 * Return: calculated pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

