#include "holberton.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success or -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, writ;

	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length] != '\0')
		{
			length++;
		}
		writ = write(fd, text_content, length);
	}

	if (writ == -1)
		return (-1);

	close(fd);
	return (1);
}
