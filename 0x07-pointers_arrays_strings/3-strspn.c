#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String in question
 * @accept: Total bytes string can accept
 *
 * Return: Length of prefiix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, l, j, a;

	l = 0;
	for (i = 0; s[i] != 0; i++)
	{
		a = 0;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] != accept[j])
			{
				continue;
			}
			else if (s[i] == accept[j])
			{
				a++;
				l++;
			}
		}
		if (a == 0)
			return (l);
	}
	return (l);
}
