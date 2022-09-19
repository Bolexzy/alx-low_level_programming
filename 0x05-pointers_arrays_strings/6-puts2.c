#include "main.h"

/**
* puts2 - prints one char out of 2 of a string.
* @str: input string.
* Return: no return.
*/
void puts2(char *str)
{
	int len = 0, count = 0, i;

	while (str[count++])
		len++;

	for (i = 0; i < (len - 1); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
