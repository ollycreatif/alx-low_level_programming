#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: String in question
 * @c: Charcater to locate
 *
 * Return: Pointer to the first occurrence of character c
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
