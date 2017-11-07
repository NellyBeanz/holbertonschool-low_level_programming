#include "holberton.h"

/**
 * read_textfile - reads a text file and print it to the POSIX standard output
 * @filename: file that needs to be read
 * @letters: number of letters
 *
 * Return: actual number of letters it could read and print or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_file, w_file;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	r_file = read(fd, buf, letters);
	if (r_file == -1)
		return (0);

	w_file = write(STDOUT_FILENO, buf, r_file);
	if (w_file == -1)
		return (0);

	close(fd);
	free(buf);
	return (r_file);
}
