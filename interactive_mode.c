#include "shell.h"

/**
 * interactive - take the command from the
 * user and execute it
 * @envp: array of environment variable
 *
 * Return: nothing
*/

void interactive(char **envp)
{
	char *user_input;
	char **args;
	int signal;
	char *get_cwd;

	do {
		get_cwd = getcwd(NULL, 0);

		if (get_cwd == NULL)
			perror("getcwd");

		if (isatty(0))
		{
			_puts(1, "Tshell:");
			_puts(1, get_cwd);
			_puts(1, "$ ");
		}

		user_input = read_line();
		args = to_tokens(user_input, " \n\t");
		signal = execute_controller(args, envp);

		free(args);
		free(user_input);
	} while (signal);
}
