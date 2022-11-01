#include "main.h"
#include <stdio.h>

#define BUF_SIZE 1024
/**
 * errno - Checks for error from file open and read(-1).
 *
 * @file_from: file from
 * @file_to: file to
 * @argv: arguments vector
 */
void errno(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the content of a file to another file
 *
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fdin, fdout;
	ssize_t r_bytes, w_bytes;
	int fdclose;

	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdin = open(argv[1], O_RDONLY);
	fdout = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errno(fdin, fdout, argv);

	r_bytes = BUF_SIZE;
	while (r_bytes == BUF_SIZE)
	{
		r_bytes = read(fdin, buf, BUF_SIZE);
		if (r_bytes < 0)
			errno(-1, 0, argv);
		w_bytes = write(fdout, buf, r_bytes);
		if (w_bytes < 0)
			errno(0, -1, argv);
	}

	fdclose = close(fdin);
	if (fdclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdin);
		exit(100);
	}
	fdclose = close(fdout);
	if (fdclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdout);
		exit(100);
	}
	return (0);
}
