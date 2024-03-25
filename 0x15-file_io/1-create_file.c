#include"main.h"
/**
 * create_file - Function that creates a file
 * @filename: Name of file to create
 * @text_content: String to write to created file
 * Return: 1 if success, -1 if function fails
 */
int create_file(const char *filename, char *text_content)
{
	int f, wrt, l;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		l = 0;
		while (text_content[l])
			l++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(f, text_content, l);

	if (f == -1 || wrt == -1)
		return (-1);

	close(f);
	return (1);
}
