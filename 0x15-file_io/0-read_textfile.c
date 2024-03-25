#include "main.h"

/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: Name of filename to read from
 * @letters: Number of letters to read and print
 * Return: Actual number of letters function could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, rd, wrt;
	char *bufr;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	bufr = malloc(sizeof(char) * letters);
	rd = read(f, bufr, letters);
	wrt = write(STDOUT_FILENO, bufr, rd);

	free(bufr);
	close(f);
	return (wrt);
}
