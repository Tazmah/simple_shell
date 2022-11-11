#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

struct built_in_t
{
	char *command;
	int (*func)(char **, char **);
};

typedef struct built_in_t built_in_t;


int _puts(char *string);
char *read_line(void);
char **to_tokens(char *user_input);
int execute_controller(char **args, char **envp);
int execute(char **args);
int normalMode(char **argv, char **envp);
void interactive(char **);
void exit(int status);
int compare(char *, char *);

/* buit in prototypes */

int texit(char **, char **);
int env(char **, char **);
int cd(char **, char **);
built_in_t *get_built_in(void);

#endif
