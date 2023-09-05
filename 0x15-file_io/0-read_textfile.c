#include "main.h"

/**
 * read_textfile -  reads a text file and prints
 *  it to the POSIX standard output
 *
 * @filename: file name
 * @letters: letters to read and print
 *
 * Return: number printed bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nbr_bytes;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	nbr_bytes = read(f, &buffer[0], letters);
	nbr_bytes = write(STDOUT_FILENO, &buffer[0], nbr_bytes);
	close(f);
	return (nbr_bytes);
}
