#include "main.h"

/**
* _strlen - Returns length of a string.
* @s: input string.
* Return: length of string.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
