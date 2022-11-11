#include "shell.h"

/**
 * execute_controller - handles the bult-in
 * functions and the executable files
 * @args: the command to execute
 *
 * Return: 0 always
 */

int execute_controller(char **args)
{

	built_in_t list_built_in[] = {
	{"exit", texit},
	{"cd", cd},
	{"env", env},
	{NULL, NULL}
	};

	if (args[0] == NULL)
		return (1);
		
	if (list_built_in[0].command == args[0])
	{
		_puts("Did I even run?");
		return (texit(args));
	}

	return (execute(args));
}
