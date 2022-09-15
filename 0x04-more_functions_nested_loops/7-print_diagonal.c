#include "main.h"

/**
* print_diagonal - prints diagonal line n times.
* @n: times diagonal line is printed.
* Return: no return.
*/
void print_diagonal(int n)
{
	int j;

	if (n >= 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('\');
		}
	}
	_putchar('\n');
}
