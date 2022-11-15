#include "shell.h"

/**
 * to_tokens - tokenize the user input
 * into an array of commands
 * @user_input: the user input string
 * @delim: the delimeter to tokenize the string
 *
 * Return: array of commands
*/

char **to_tokens(char *user_input, char *delim)
{
	int buffSize, index;
	char *token;
	char **tokens;

	for (buffSize = 0; user_input[buffSize] != '\0'; buffSize++)
		;

	tokens = malloc(buffSize * sizeof(char *));

	if (!tokens)
	{
		_puts(2, "tokens allocation failed");
		exit(EXIT_FAILURE);
	}

	token = strtok(user_input, delim);

	for (index = 0; token != NULL; index++)
	{
		tokens[index] = token;
		token = strtok(NULL, delim);
	}

	return (tokens);
}
