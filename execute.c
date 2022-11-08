#include "shell.h"

/**
* execute - execute the program inputed
* @args: the command to be executed
*
* Return: 1 if successful
*/

int execute(char **args)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execv(args[0], args) == -1)
		{
			perror("hsh");
		}

		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("hsh");
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));

	}

	return (1);

}
