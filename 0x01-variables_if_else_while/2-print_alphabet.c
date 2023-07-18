#include <stdio.h>

/**
 *  main - print alphabet
 *
 *  Return: always returns 0
*/

int main(void)
{
		char i;

		for (i = 'a' ; i <= 'z' ; i++)
			putchar(i);
		putchar('\n');
		return (0);
}
