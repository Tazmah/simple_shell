#include "shell.h"

/**
 * main - calls the interactive mode
 * or the non-interactive if argument
 * is passed into the programe
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 if successfull
*/

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	if (argc > 1)
		normalMode(argv);
	else
		interactive();

	return (EXIT_SUCCESS);
}
