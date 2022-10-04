#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 *
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, c, ij;

	if (ac == 0)
		return (NULL);

	for (i = c = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	ij = 0;
	for (i = 0; ij < c; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, ij++)
		{
			a[ij] = av[i][j];
		}
		a[ij] = '\n';
		ij++;
	}
	a[ij] = '\0';

	return (a);
}
