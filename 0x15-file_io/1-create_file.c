#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: name of the file to create
 * @text_content: text to wrie
 *
 * Return: 1 success 0 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fildes;
	ssize_t nbr_bytes = 0, strlen = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (*text_content++)
			strlen++;
	}
	fildes = open(filename, O_TRUNC | O_CREAT | O_WRONLY, S_IWUSR | S_IRUSR);
	if (fildes == -1)
		return (-1);
	nbr_bytes = write(fildes, text_content, strlen);
	if (nbr_bytes == -1)
		return (-1);
	close(fildes);
	return (1);
}
