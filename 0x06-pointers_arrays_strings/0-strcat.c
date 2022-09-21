#include "main.h"

/**
* _strcat - Concatenates two strings.
*
* @dest: First string.
* @src: Second string.
* Return: Conactenated string.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (*(dest + i))
	{
		if (*(dest + i) == '\0')
			break;
		i++;
	}

	while (*(src + len) != '\0')
	{
		*(dest + i) = *(src + len);
		i++;
		len++;
	}

	return (dest);
}
