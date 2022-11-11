#include "shell.h"

/**
 * main - calls the interactive mode
 * or the non-interactive if argument
 * is passed into the programe
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 if successfull
*/

int main(int argc, char *argv[], char **envp)
{
	(void)argc;

	if (argc > 1)
		normalMode(argv, envp);
	else
		interactive(envp);

	return (EXIT_SUCCESS);
}
