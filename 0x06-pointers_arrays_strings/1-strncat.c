#include "main.h"

/**
* _strncat - Concatenates two strings.
*
* @dest: destination.
* @src: source.
* @n: amount of bytes used from src.
* Return: the pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, index2 = 0;

	while (*(dest + index) != '\0')
		index++;

	while (index2 < n)
	{
		if (*(src + index2))
		{
			*(dest + index) = *(src + index2);
			index++;
			index2++;
		}
		else
			break;
	}
	return (dest);
}
