#include <unistd.h>

/**
 * _putchar - writes the char to stdout
 * @c: The char to print
 *
 * Return: 1 on success
 * On error -1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
