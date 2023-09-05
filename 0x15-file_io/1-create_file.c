#include "main.h"

/**
 * _strlen - gets legth of string
 *
 * @str: string param
 *
 * Return: length
 */

int _strlen(char *str)
{
	int l = 0;

	if (!str)
		return (0);
	while (*str++)
		l++;
	return (l);
}

/**
 * create_file - creates a file
 *
 * @filename: file's name
 * @text_content: content to write
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t nbr_bytes, l = _strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (l)
		nbr_bytes = write(f, text_content, l);
	close(f);
	return (nbr_bytes == l ? 1 : -1);
}
