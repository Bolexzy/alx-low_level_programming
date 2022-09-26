#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (*a[i])
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
		i++;
	}
}
