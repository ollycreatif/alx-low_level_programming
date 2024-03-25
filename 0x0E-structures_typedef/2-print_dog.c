#include "dog.h"
/**
 * print_dog - prints the content of struct dog
 * @d: the structure of a dog
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);
		
		if (d->age == 0)
			d->name = "(nil)";
		printf("Age: %.1f\n", d->age);

		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
}
