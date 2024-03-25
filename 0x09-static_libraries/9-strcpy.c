#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by src
 * @dest: string to copy to
 * @src: string to copy from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';
	return (dest);
}
