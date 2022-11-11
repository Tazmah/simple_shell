#include "shell.h"

/**
 * exit - exit the program
 * @args: the list of argument
 *
 * Return: 0 alway
 */

int exit(char **args)
{
	(void)args;
	return (0);
}

/**
 * env - print the environment variable
 * @args: the list of commands
 *
 * Return: 1 always
 */

int env(char **args)
{
	(void)args;
	_put("No function yet!");
	return (1);
}

/**
 * cd - change the working directory
 * @args: the list of commands
 *
 * Return: 1 always
 */

int cd(char **args)
{
	if (args[1] == NULL)
		_puts("hsh: expected argument to cd");
	else
		if (chdir(args[1]) != 0)
			perror("hsh");

	return (1);
}

