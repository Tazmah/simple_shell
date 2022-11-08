#include "shell.h"

/**
 * to_tokens - tokenize the user input
 * into an array of commands
 * @user_input: the user input string
 *
 * Return: array of commands
*/

char **to_tokens(char *user_input)
{
	int buffSize = 0;
	char *token, *delim = " ";
	char **tokens;

	while (user_input[buffSize] != '\0')
		buffSize++;

	tokens = malloc(buffSize * sizeof(char *));

	if (!tokens)
	{
		_puts("tokens allocation error");
		exit(EXIT_FAILURE);
	}

	token = strtok(user_input, delim);

	for (buffSize = 0; token != NULL; buffSize++)
	{
		tokens[buffSize] = token;
		token = strtok(NULL, delim);
	}

	tokens[buffSize] = NULL;

	return (tokens);
}
