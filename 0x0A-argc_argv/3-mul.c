#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: The number of command line arguments
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

	return (0);
}
