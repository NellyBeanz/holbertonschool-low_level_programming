#include "holberton.h"

/**
 * main - entry point
 * @argc: argument
 * @argv: vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, r_file, writ;
	char *buf;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from from_to\n"), exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	buf = malloc(sizeof(char) * BUFFSIZE);
	do {
		r_file = read(from, buf, BUFFSIZE);
		if (r_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read file from %s\n", argv[1]),
			exit(98); }
		if ((write(to, buf, r_file)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99); }
	} while (r_file == BUFFSIZE);
	writ = close(from);
	if (writ == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from),
			exit(100); }
	writ = close(to);
	if (writ == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100); }
	free(buf);
	return (0);
}
