#include "main.h"
#include <stdio.h>

/**
 * isPrintableChar - checks if char is printable
 *
 * @n: int to check
 *
 * Return: 1 true, 0 false
 */

int isPrintableChar(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHex - prints hex value of a string
 *
 * @str: string to print
 * @from: starting position
 * @to: ending position
 *
 */


void printHex(char *str, int from, int to)
{
	int i = 0;

	while (i < 10)
	{
		if (i < to)
			printf("%02x", *(str + from + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - prints ascii value of a string
 * @str: string
 * @from: starting position
 * @to: ending position
 */

void printASCII(char *str, int from, int to)
{
	int c, i = 0;

	while (i < to)
	{
		c = *(str + i + from);
		if (!isPrintableChar(c))
			c = 46;
		printf("%c", c);
		i++;
	}
}


/**
 * print_buffer - prints a buffer
 *
 * @str: string to print
 * @size: buffer size
 */

void print_buffer(char *str, int size)
{
	int from, to;

	if (size > 0)
	{
		for (from = 0; from < size; from += 10)
		{
			to = (size - from < 10) ? size - from : 10;
			printf("%08x: ", from);
			printHex(str, from, to);
			printASCII(str, from, to);
			printf("\n");
		}
	} else
		printf("\n");
}
