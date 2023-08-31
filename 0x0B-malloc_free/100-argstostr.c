#include "main.h"

/**
 * _strlen - gets string length
 *
 * @s: string param
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: int param
 * @av: args
 *
 * Return: concat str
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, sc = 0, counter = 0;

	if (ac == 0 || av  == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, sc++)
		sc =  sc + _strlen(av[i]);

	str = malloc(sizeof(char) * sc + 1);
	if (str == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, counter++)
			str[counter] = av[i][j];
		str[counter] = '\n';
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
