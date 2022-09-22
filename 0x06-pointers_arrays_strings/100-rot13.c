#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 *
 * @str: input string.
 * Return: rrotated string.
 */
char *rot13(char *str)
{
	int i = 0, j;

	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alp[j])
			{
				str[i] = rot[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
