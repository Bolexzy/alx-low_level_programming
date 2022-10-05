#include "main.h"
#include <stdlib.h>

/**
 * free_char - frees a 2 dimensional array.
 *
 * @grid: multidimensional array of char.
 * @height: height(row) of the array.
 * Return: no return
 */
void free_char(char **grid, unsigned int height)
{
	unsigned int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

/**
 * strtow - splits a string into words.
 *
 * @str: string.
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **words;
	unsigned int i, j, c, word, sp;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = word = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			word++;
	}
	c++;
	words = malloc(sizeof(char *) * c);
	if (words == NULL || word == 0)
	{
		free(words);
		return (NULL);
	}
	for (i = sp = 0; i < word; i++)
	{
		for (c = sp; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				sp++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				words[i] = malloc((c - sp + 2) * sizeof(char));
				if (words[i] == NULL)
				{
					free_char(words, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; sp <= c; sp++, j++)
			words[i][j] = str[sp];
		words[i][j] = '\0';
	}
	words[i] = '\0';
	return (words);
}
