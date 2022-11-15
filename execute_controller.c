#include "shell.h"

/**
 * execute_controller - handles the bult-in
 * functions and the executable files
 * @args: the command to execute
 * @envp: array of environment variable
 *
 * Return: 0 always
 */

int execute_controller(char **args, char **envp)
{
	int index;

	built_in_t list_built_in[] = {
	{"exit", texit},
	{"cd", cd},
	{"env", env},
	{NULL, NULL}
	};

	if (args[0] == NULL)
		return (1);

	for (index = 0; list_built_in[index].command != NULL; index++)
		if (compare(list_built_in[index].command, args[0]))
			return ((list_built_in[index].func)(args, envp));

	return (execute(args));
}
