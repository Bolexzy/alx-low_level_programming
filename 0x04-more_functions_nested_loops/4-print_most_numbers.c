#include "main.h"

/**
* print_most_numbers - prints numbers between 0 to 9
* (except 2 and 4).
* Return: no return.
*/
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
