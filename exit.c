#include "shell.h"
/**
 * _exit - a function to exit a shell interface
 * @status: the param to know the status
 * Return: no return value
*/


void exit(int status)
{
    printf("Exiting ....\n");
    exit(status);
}

int main()
{
    int i,j = 0;
    while (i != 1)
    {
        j++;
        if (j >= 1000)
        {
            exit(0);
        }
    }
}

