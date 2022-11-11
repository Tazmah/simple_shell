#include "shell.h"

/**
 * interactive - take the command from the
 * user and execute it
 *
 * Return: nothing
*/

void interactive(char **envp)
{
	char *user_input;
	char **args;
	int signal;

	do {
		_puts("Tshell> ");
		user_input = read_line();
		args = to_tokens(user_input);
		signal = execute_controller(args, envp);

		free(args);
		free(user_input);
	} while (signal);
}
