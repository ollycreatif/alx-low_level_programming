#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: String to add to
 * @src: String to be added
 * @n: Number of bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s1, s2, sa;

	s1 = s2 = 0;
	while (dest[s1] != '\0')
	{
		s1++;
	}
	while (src[s2] != '\0')
	{
		s2++;
	}
	sa = s2;
	s2 = 0;
	while (s2 < sa && s2 < n)
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	return (dest);
}
