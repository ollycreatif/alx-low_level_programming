#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Function that concatenates 2 strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: Concatenation of s1 and s2
 */

char *str_concat(char *s1; char *s2)
{
	char *cncat;
	int i, j;
:
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	cncat = malloc((i + j + 1) * sizeof(char));

	if (cncat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		cncat[i] = s1[i];

	i = 0;
	for (j = 0; s2[j] != '\0'; j++)
	{
		cncat[i] = s2[j];
		i++;
	}
	cncat[i] = '\0'
		return (cncat);
}
