#include "main.h"

/**
 * append_text_to_file - appends a txt to file
 * @filename: name of the file to create
 * @text_content: text to wrie
 *
 * Return: 1 success 0 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fildes;
	ssize_t nbr_bytes = 0;
	int strlen = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (strlen = 0; text_content[strlen];)
			strlen++;
	}
	fildes = open(filename, O_APPEND | O_WRONLY);
	if (fildes == -1)
		return (-1);
	nbr_bytes = write(fildes, text_content, strlen);
	if (nbr_bytes == -1)
		return (-1);
	close(fildes);
	return (1);
}
