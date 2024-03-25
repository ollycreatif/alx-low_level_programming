#include "main.h"

/**
 * _strpbrk - Function that searches a string
 * for any of a set of bytes
 * @s: String in question
 * @accept: Total bytes string can accept
 *
 * Return: Pointer to the first occurence of byte
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *f;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				f = &s[i];
				return (f);
			}
		}
	}
	return (0);
}
