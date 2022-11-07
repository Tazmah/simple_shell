#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _puts(char *string);
char *read_line(void);
char **to_tokens(char *user_input);

#endif