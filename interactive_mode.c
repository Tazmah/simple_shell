#include "shell.h"

/**
 * interactive - take the command from the
 * user and execute it
 *
 * Return: nothing
*/

void interactive(void)
{
	char *user_input;
	char **args;
	int signal;

	do {
		user_input = read_line();
		args = to_tokens(user_input);
		signal = execute_controller(args);

		free(args);
		free(user_input);
	} while (signal);
}
