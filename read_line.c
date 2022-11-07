#include "shell.h"

char *read_line(void)
{
        char *user_input = NULL;
        size_t buff = 0;

        if ((getline(&user_input, &buff, stdin)) == -1)
        {
                if (feof(stdin))
                        exit(EXIT_SUCCESS);
                else
                {
                        perror("readline");
                        exit(EXIT_FAILURE);
                }
        }

        return (user_input);
}