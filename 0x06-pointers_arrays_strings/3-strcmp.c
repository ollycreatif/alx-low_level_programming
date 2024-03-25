#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if s1 = s2, -1 if s1 < s2, +1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, x1, x2;

	i = x1 = x2 = 0;
	while (s1[x1] != 0)
		x1++;
	while (s2[x2] != 0)
		x2++;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (x1 > x2)
		return (s1[x2]);
	else if (x1 < x2)
		return (s2[x1] * -1);
	return (0);
}
