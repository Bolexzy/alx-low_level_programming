#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line.
 *
 * @argc: number of command line arguments.
 * @argv: array of arguments
 * Return: 0 - success.
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
