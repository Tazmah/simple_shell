#include "shell.h"

/**
 * _puts - write a string to the
 * standard output
 * @string: the strin to write
 * @std: file descriptor
 *
 * Return: the amount of character printed
 */

int _puts(int std, char *string)
{
	int x = 0;

	while (string[x] != '\0')
		x++;

	return (write(std, string, x));
}
