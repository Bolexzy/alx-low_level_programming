#include "main.h"

/**
* print_triangle - prints a triangle.
* @size: numbers of lines.
* Return: no return.
*/
void print_triangle(int size)
{
	int i, j, s;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (s = 1; s < (size - i); s++)
				_putchar(' ');
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
