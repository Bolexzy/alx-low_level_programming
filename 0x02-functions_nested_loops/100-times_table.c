#include "main.h"

/**
* print_times_table - Prints n timees table, starting with 0.
*
* @n: input number as integer.
*
* Return: no return.
*/
void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * j;
				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + 48);
				}
				else if (prod <= 99)
				{
					_putchar(32);
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				{
					_putchar(((prod / 100) % 10) + 48);
					_putchar(((prod / 10) % 10) + 48);
					_putchar((prod % 10) + 48);
				}
			}
			_putchar('\n');

		}
	}
}
