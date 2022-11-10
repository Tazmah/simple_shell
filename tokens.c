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
	int buffSize, index;
	char *token, *delim = " ";
	char **tokens;

	for (buffSize = 0; user_input[buffSize] != '\0'; buffSize++)
		;

	tokens = malloc(buffSize * sizeof(char *));

	if (!tokens)
	{
		_puts("tokens allocation failed");
		exit(EXIT_FAILURE);
	}

	token = strtok(user_input, delim);

	for (index = 0; token != NULL;)
	{
		tokens[index] = token;
		token = strtok(NULL, delim);
		index++;
	}

	tokens[index] = token;

	_puts(user_input);

/*
	_puts("args: ");
	for (index = 0; tokens[index] != NULL; index++)
		_puts(tokens[index]), _puts(" ");

*/
/*
	tokens[0] = "ls";
	tokens[1] = NULL;
*/
	return (tokens);
}
