#include "main.h"

/**
 * print_prompt - print a prompt
 * Return: nothing
*/

int print_prompt(void)
{
    ssize_t bytes_written;

    bytes_written = write(STDOUT_FILENO, "$ ", 2);

    if (bytes_written == -1)
    {
        perror("write");
        return (1);
    }

    return (0);
}