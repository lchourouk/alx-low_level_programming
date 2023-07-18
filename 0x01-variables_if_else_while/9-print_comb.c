#include <stdio.h>

/**
 *  main - print comb
 *
 *  Return: 0
*/

int main(void)
{
		int i;
		char c;

		for (i = 0 ; i < 10 ; i++)
		{
			putchar(i + '0');
			if (i != 9)
			{
				putchar(',');
				puchar(' ');
			}
		}
		putchar('\n');
		return (0);
}
