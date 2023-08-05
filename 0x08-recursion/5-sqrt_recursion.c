#include "main.h"


int guess_square(int n, int guess);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number param
 *
 * Return: natural sqrt of n or -1
 */

int _sqrt_recursion(int n)
{
	return (guess_square(n, 1));
}

/**
 * guess_square - tries to find the natural square of n
 *
 * @n: int param
 * @guess: int guesses
 *
 * Return: natural sqaure or -1
 */

int guess_square(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (guess_square(n, guess + 1));
	else
		return (-1);
}
