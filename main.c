#include "main.h"

/**
 * main - simple shell
 * Return: Always 0
*/

int main(int __attribute((unused)), char **__attribute((unused)))
{
    if (isatty(STDIN_FILENO) == 1)
    {
        while (1)
        {
            print_prompt();
            get_line();
            parse_input();
            execute();
        }
        
    }
    else
    {
        //run in non-interactive mode
    }

    return (0);
}