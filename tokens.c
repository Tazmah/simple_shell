#include "shell.h"

char **to_tokens(char *user_input)
{
        int buffSize = 0;
        char *token, *delim = " ";

        while (user_input[buffSize] != '\0')
                buffSize++;

        char **tokens = malloc(sizeof(char*) * buffSize);

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