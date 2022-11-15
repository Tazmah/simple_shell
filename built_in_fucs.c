#include "shell.h"

/**
 * texit - exit the program
 * @args: the list of argument
 * @envp: array of environment variable
 *
 * Return: 0 alway
 */

int texit(char **args, char **envp)
{
	(void)args;
	(void)envp;
	exit(0);
}

/**
 * env - print the environment variable
 * @args: the list of commands
 * @envp: array of environment variable
 *
 * Return: 1 always
 */

int env(char **args, char **envp)
{
	int index;
	(void)args;
	(void)envp;

	for (index = 0; envp[index] != NULL; index++)
		_puts(1, envp[index]);
	_puts(1, "\n");

	return (1);
}

/**
 * cd - change the working directory
 * @args: the list of commands
 * @envp: array of environment variable
 *
 * Return: 1 always
 */

int cd(char **args, char **envp)
{
	(void)args;
	(void)envp;

	if (args[1] == NULL)
		_puts(2, "hsh: expected argument to cd");
	else
		if (chdir(args[1]) != 0)
			perror("hsh");

	return (1);
}

