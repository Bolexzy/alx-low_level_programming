#include "main.h"

/**
* print_number - prints an integer.
* @n: input integer.
* Return: no return.
*/
void print_number(int n)
{
	int m;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	if (m < 9)
	{
		_putchar(m + 48);
	}
	else if (m < 99)
	{
		_putchar((m / 10) + 48);
		_putchar((m % 10) + 48);
	}
	else if (m < 999)
	{
		_putchar(((m / 100) % 10) + 48);
		_putchar(((m / 10) % 10) + 48);
		_putchar((m % 10) + 48);
	}
	else if (m < 9999)
	{
		_putchar(((m / 1000) % 10) + 48);
		_putchar(((m / 100) % 10) + 48);
		_putchar(((m / 10) % 10) + 48);
		_putchar((m % 10) + 48);
	}
}
