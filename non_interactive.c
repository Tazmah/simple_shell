#include "shell.h"

/**
 * normalMode - execute the command with the
 * argument passed in
 * @argv: the command to be executed
 *
 * Return: 0 if successful
*/

int normalMode(char **argv, char **envp)
{
	char **args;
	int index = 1;

	for (index = 0; argv[index] != NULL; index++)
	;

	args = malloc(index * sizeof(char *));
	if (args == NULL)
		perror("non-interactive malloc");

	for (index = 1; argv[index] != NULL; index++)
		args[index - 1] = argv[index];

	args[index - 1] = NULL;

	return (execute_controller(args, envp));
}
