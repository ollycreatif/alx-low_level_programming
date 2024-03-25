#include "main.h"
/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: Name of the file
 * @text_content: String to add to the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, wrt, l;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_WRONLY | O_APPEND);
	wrt = write(f, text_content, l);

	if (f == -1 || wrt == -1)
		return (-1);

	close(f);
	return (1);
}
