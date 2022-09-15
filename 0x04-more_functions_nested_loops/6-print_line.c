#include "main.h"

/**
* print_line - prints straight line n times.
* @n: times straight line is printed.
* Return: no return.
*/
void print_line(int n)
{
	int j;

	if (n >= 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
