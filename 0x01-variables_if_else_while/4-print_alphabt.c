#include <stdio.h>

/**
 *  main - print alphabet except q and e
 *
 *  Return: 0
*/

int main(void)
{
		char c;

		for (c = 'a' ; c <= 'z' ; c++)
			if (c != 'q' && c != 'e')
				putchar(c);
		putchar('\n');
		return (0);
}
