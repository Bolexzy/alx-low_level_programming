#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog2;
	int i, n, o;

	my_dog2 = malloc(sizeof(dog_t));
	if (my_dog2 == NULL || !(name) || !(owner))
	{
		free(my_dog2);
		return (NULL);
	}

	for (n = 0; name[n]; n++)
		;
	for (o = 0; owner[o]; o++)
		;

	my_dog2->name = malloc(sizeof(char) *(n + 1));
	my_dog2->owner = malloc(sizeof(char) *(o + 1));

	if (!(my_dog2->name) || !(my_dog2->owner))
	{
		free(my_dog2->name);
		free(my_dog2->owner);
		free(my_dog2);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		my_dog2->name[i] = *(name + i);
	my_dog2->name[i] = '\0';

	my_dog2->age = age;

	for (i = 0; i < o; o++)
		my_dog2->owner[i] = *(owner + i);
	my_dog2->owner[i] = '\0';

	return (my_dog2);
}
