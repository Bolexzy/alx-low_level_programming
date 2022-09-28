#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
