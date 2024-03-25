#include <stdio.h>
#include "main.h"

/**
 * main - Prints  the number of arguments passed to the program
 * @argc: argument count
 * @argv: argment vector
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
