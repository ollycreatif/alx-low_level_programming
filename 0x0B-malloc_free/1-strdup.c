#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Function that returns pointer to a new string
 * that duplicates given string
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicate string, NULL if memory
 * is insufficient
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;
	len++;
	str2 = malloc(len * sizeof(*str));
	if (str2 == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		str2[i] = str[i];

	return (str2);
}
