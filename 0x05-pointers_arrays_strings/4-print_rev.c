#include "main.h"

/**
* print_rev - Prints a string in reverse.
*
* @s: input string.
* Return: no return.
*/
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}

	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
