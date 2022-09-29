#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	else
		return (0);
}

/**
 * _strcmp - compares each character of the string.
 *
 * @s: string
 * @i: smallest iterator.
 * @l: length of string s.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int _strcmp(char *s, int i, int l)
{
	if (i >= l)
		return (1);
	if (s[i] == s[l])
		return (_strcmp(s, i + 1, l - 1));

	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 *
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int i = 0, l;

	l = _strlen(s) - 1;
	if (*s == '\0')
		return (1);

	return (_strcmp(s, i, l));
}
