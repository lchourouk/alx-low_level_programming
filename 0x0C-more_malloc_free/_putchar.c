#include <unistd.h>

/**
 * _putchar - writes tjhe char c to stdout
 *
 * @c: char param
 *
 * Return: 1, -1 + errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
