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
	int index;
	char **built_in_funcs;

	built_in_funcs = get_built_in();

	if (args[0] == NULL)
		return (1);

	for (index = 0; built_in_funcs[index]; index++)
	{
		if (built_in_funcs[index].command == args[0])
			return ((built_in_funcs[index].func)(args));
	}

	return (execute(args));
}
