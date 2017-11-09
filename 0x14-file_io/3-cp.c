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
	int from, to, r_file, w_file;
	char buf[BUFFSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		r_file = read(from, buf, BUFFSIZE);
		if (r_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98); }
		w_file = write(to, buf, r_file);
		if (w_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99); }
	} while (r_file != 0);
	w_file = close(from);
	if (w_file == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from),
			exit(100); }
	w_file = close(to);
	if (w_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100); }
	return (0);
}
