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
	int status, index;
	(void)index;


/*	for (index = 1; args[index]; index++)
	{
		_puts("arg:");
		_puts(args[index]);
		_puts("\n");
	}
*/

	pid = fork();

	if (pid == 0)
	{
		if ((execvp(args[0], args)) == -1)
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
