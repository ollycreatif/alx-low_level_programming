#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees struct dog
 * @d: Pointer to struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
