#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: String in question
 * @needle: Substring
 *
 * Return: Pointer to the beginning of needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *beginning;
	char *search;

	while (*haystack != '\0')
	{
		beginning = haystack;
		search = needle;
		while (*search == *haystack && *haystack != 0 && *search != 0)
		{
			haystack++;
			search++;
		}
		if (*search == 0)
			return (beginning);
		haystack = beginning + 1;
	}
	return (0);
}
