#include "shell.h"

int _puts(char *string)
{
        int x = 0;

        while (string[x] != '\0')
                x++;
        
       return(write(1, string, x));
}