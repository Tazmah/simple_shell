#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int _puts(char *string);
char *read_line(void);
char **to_tokens(char *user_input);
int execute_controller(char **args);
int execute(char **args);
int normalMode(char **argv);
void interactive();
void exit(int status);

/* buit in prototypes */

int exit(char **);
int env(char **);
int cd(char **);
built_in_t *get_built_in(void);

struct built_in_t
{
	char *command;
	(int)(*func)(char **);
};

typedef struct built_in_t built_in_t;
#endif
