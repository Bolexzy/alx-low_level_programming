#include "main.h"

/**
* _isalpha - Shows 1 if the input is a
* letter Another cases, shows 0
*
* @c: The character in ACII code.
*
* Return: 1 for letters. 0 for the rest.
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
