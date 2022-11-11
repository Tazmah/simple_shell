#include "shell.h"

/**
 * exit - exit the program
 * @args: the list of argument
 *
 * Return: 0 alway
 */

int texit(char **args, char **envp)
{
	(void)args;
	(void)envp;
	return (0);
}

/**
 * env - print the environment variable
 * @args: the list of commands
 *
 * Return: 1 always
 */

int env(char **args, char **envp)
{
	int index;
	(void)args;
	(void)envp;

	for (index = 0; envp[index] != NULL; index++)
		_puts(envp[index]);
	_puts("\n");

	return (1);
}

/**
 * cd - change the working directory
 * @args: the list of commands
 *
 * Return: 1 always
 */

int cd(char **args, char **envp)
{
	(void)args;
	(void)envp;

	if (args[1] == NULL)
		_puts("hsh: expected argument to cd");
	else
		if (chdir(args[1]) != 0)
			perror("hsh");

	return (1);
}

