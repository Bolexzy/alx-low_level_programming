#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**/
char *_strdup(char *str)
{
	char *s;
	int i, j;
	
	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return(s);
}
