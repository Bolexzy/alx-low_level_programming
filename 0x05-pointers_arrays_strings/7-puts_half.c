#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	if (len % 2 == 0)
	{
		index = len / 2;
	}
	else
	{
		index = (len + 1) / 2;
	}

	for (; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
