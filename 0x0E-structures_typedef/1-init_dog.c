#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function to initialize a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Name of the dog
 * @age: Dog's age
 * @owner: Owner of the dog
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
