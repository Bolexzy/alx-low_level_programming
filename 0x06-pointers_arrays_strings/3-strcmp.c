#include "main.h"

/**
* _strcmp - Compares two strings.
*
* @s1: First string.
* @s2: Second string.
* Return: 0 if s1 and s2 are equals,
* another number if not.
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	diff = *(s1 + i) - *(s2 + i);

	if (diff == 0)
	{
		i += 1;
		while (s1[i] != '\0' && s2[i] != '\0' && diff == 0)
		{
			diff = *(s1 + i) - *(s2 + i);
			i++;
		}
	}
	return (diff);
}
