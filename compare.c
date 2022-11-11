#include "shell.h"

/**
 * compare - compares two string
 * @a: first string
 * @b: second string
 *
 * Return: 0 if equal else 1
 */

int compare(char *a, char *b)
{
	int signal = 1, index = 0;

	while (a[index] != '\0' && b[index] != '\0')
	{
		if (a[index] != b[index])
		{
			signal = 0;
			break;
		}
		index++;
	}

	return (signal);
}
