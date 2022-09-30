#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 *
 * @argc: The number of command line arguments
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
