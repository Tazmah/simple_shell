#include "shell.h"

/**
 * read_line - prompt the user for
 * input and save it into a buffer
 *
 * Return: the user_input
 */

char *read_line(void)
{
	char *user_input = NULL;
	size_t buff = 0;

	if ((getline(&user_input, &buff, stdin)) == -1)
	{
		perror("readline");
		exit(EXIT_FAILURE);
	}

	return (user_input);
}

