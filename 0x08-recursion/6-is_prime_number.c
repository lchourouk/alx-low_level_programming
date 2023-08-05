#include "main.h"
#include <stdio.h>

int check_prime(int n, int m);

/**
 * is_prime_number - returns 1 if n is prime or 0 if not
 *
 * @n: int param
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - looks for a divisor of n
 *
 * @n: int param
 * @m: int param
 *
 * Return: 0 or 1
 */

int check_prime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, m + 1));
}
