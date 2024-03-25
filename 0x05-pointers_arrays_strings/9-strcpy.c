#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: Locatuon to copy string into
 * @src: String to copy
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != 0)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}
