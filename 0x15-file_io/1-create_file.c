#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREATE | O_WRONLY | O_TRUNC, 600);

	if (fd < 0)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	bytes = write(STDOUT_FILENO, text_content, len);

	if (bytes < 0)
		return (-1);

	close(fd);
	return (1);
}
