#include "3-calc.h"

/**
 * main - program that performs arithmetic operations.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		func = get_op_func(argv[2]);
		if (!func)
		{
			printf("Error\n");
			exit(99);
		}

		printf("%d\n", func(a, b));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
