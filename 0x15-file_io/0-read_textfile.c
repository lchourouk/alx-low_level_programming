#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: ptr to the file to read
 * @letters: nbr of bytes to read
 *
 * Return: nbr of printed bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nbr_bytes;
	int fildes;
	char *buf = malloc(letters * sizeof(char));

	if (!filename)
		return (0);
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	nbr_bytes = read(fildes, buf, letters);
	nbr_bytes = write(STDOUT_FILENO, buf, nbr_bytes)return (0);
	close(fildes);
	free(buf);
	return (nbr_bytes);
}
