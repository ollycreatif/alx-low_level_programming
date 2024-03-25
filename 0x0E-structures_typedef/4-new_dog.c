#include "dog.h"
/**
 * _strlen - computes the length of a string
 * @s: string in question
 * Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - copies string from source to a new destination
 * @src: points string source
 * @dest: points destination of string
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: Name of the dog
 * @age: Dog's age
 * @owner: Owner of the dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t_d;

	t_d = malloc(sizeof(dog_t));
	t_d->name = malloc(sizeof(char) * _strlen(name) + 1);
	t_d->owner = malloc(sizeof(char) * _strlen(name) + 1);

	t_d->name = _strcpy(t_d->name, name);
	t_d->age = age;
	t_d->owner = _strcpy(t_d->owner, owner);

	return (t_d);
}
