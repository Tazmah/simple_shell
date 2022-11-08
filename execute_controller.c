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
	return (execute(args));
}
