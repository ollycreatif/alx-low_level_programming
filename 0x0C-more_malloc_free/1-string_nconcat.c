#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: First string to consider
 * @s2: Second string to consider
 * @n: max bytes of s2 to concatenate with s1
 *
 * Return: Final (concatenated) string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;
	unsigned int l, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = 0;
	while (s1[l] != '\0')
		l++;

	size = (l + n) * sizeof(char);
	s = malloc(size + 1);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size && s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (i < size && s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';

	return (s);
}
