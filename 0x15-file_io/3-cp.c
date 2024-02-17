#include "main.h"

#define ERR_READ "Error: Can't read from file %s\n"
/**
 * main - copies the content of a file to another file
 *
 * @argc: nbr of args
 * @argv: arg values
 *
 * Return: 1 success 0 failure
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	char *buf = malloc(1024 * sizeof(char));
	ssize_t content;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((content = read(file_from, buf, 1024)) > 0)
		if (write(file_to, buf, content) != content)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (content == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (file_to)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	free(buf);
	return (1);
}
