#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters to stdout
 *
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (!buf)
		return (0);

	if (letters > 0)
	{
		fd = open(filename, O_RDONLY);

		if (fd == -1)
			return (0);

		len = read(fd, buf, letters);
		len = write(STDOUT_FILENO,, buf, len);

		if (len == -1)
			return (0);

		close(fd);

		free(buf);
	}
	return (len);
}
