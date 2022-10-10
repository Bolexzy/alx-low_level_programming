#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct to store information of a dog.
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
