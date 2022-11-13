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
	char *get_cwd;

	do {
		get_cwd = getcwd(NULL, 0);

		if (get_cwd == NULL)
			perror("getcwd");

		if (isatty(0))
		{
			_puts("Tshell:");
			_puts(get_cwd);
			_puts("$ ");
		}

		user_input = read_line();
		args = to_tokens(user_input);
		signal = execute_controller(args, envp);

		free(args);
		free(user_input);
	} while (signal);
}
