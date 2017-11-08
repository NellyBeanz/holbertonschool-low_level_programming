#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to file
 *
 * Return: 1 for success or -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length, writ;

	if (filename == NULL)
		return (-1);

	length = 0;
	while (text_content[length] != '\0')
	{
		length++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (length > 0)
		writ = write(fd, text_content, length);

	if (writ == -1)
		return (-1);

	close(fd);
	return (1);
}
