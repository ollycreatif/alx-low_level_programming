#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters
 * of a string to uppercase
 * @l: lowercase letters in string
 *
 * Return: l
 */

char *string_toupper(char *l)
{
	int i = 0;

	while (l[i] != 0)
	{
		if (l[i] >= 97 && l[i] <= 122)
			l[i] -= 32;
		i++;
	}
	return (l);
}
