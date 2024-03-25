#include "main.h"

/**
 * _strncpy - Copies n bytes of string to a destination
 * @dest: Address to copy into
 * @src: Address to copy string from
 * @n: Byte of src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, s;

	i = s = 0;
	while (src[s] != '\0')
	{
		s++;
	}
	if (s < n)
	{
		while (i < s)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
