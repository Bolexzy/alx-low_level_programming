#include "main.h"

/**
* _strncpy - Copies a string.
*
* @dest: Destination string.
* @src: source.
* @n: amount of bytes from src.
* Return: the pointer to dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n)
	{
		if (*(src + index) != '\0')
		{
			*(dest + index) = *(src + index);
			index++;
		}
		else
		{
			*(dest + index) = '\0';
			index++;
		}
	}
	return (dest);
}
