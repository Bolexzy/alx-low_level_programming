#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
