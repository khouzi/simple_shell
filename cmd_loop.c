#include "shell.h"

/**
 * cmd_loop - Entry point of the program.
 * Return: starts the shell
 */
void cmd_loop(void)
{
        char *line;
        char **args;
        int status;

        if (isatty(STDIN_FILENO))
        {
                do {
                write(1, "$ ", 2);
                line = cmd_read_line();
                cmd_store(line);
                args = cmd_split_line(line);
                status = cmd_execute(args);

                free(line);
                free(args);
        } while (status);
        }
}
