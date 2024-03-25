#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to add to
 * @src: String to be added
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
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
	while (s2 < sa)
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	return (dest);
}
