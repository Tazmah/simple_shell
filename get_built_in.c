#include "shell.h"

built_in_t *get_built_in(void)
{
	built_in_t list_built_in[] = {
	{"exit", exit},
	{"cd", cd},
	{"env", env},
	{NULL, NULL}
	};

	return (list_built_in);
}
