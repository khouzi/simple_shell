#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>


#define cmd_RL_BUFSIZE 1024
#define cmd_TOK_BUFSIZE 64
#define cmd_TOK_DELIM " \t\r\n\a"

void sig_handler(int signum);
int cmd_cd(char **args);
int cmd_help(char **args);
int cmd_exit(char **args);
int cmd_env(char **args);
int cmd_launch(char **args);
char **split_input(char *line, char *delim);
char *add_command(char *command, char **PATH_splitted);
char **cmd_split_line(char *line);
char *cmd_gen(char *directory, char *command);
ssize_t read_textfile(const char *filename, size_t letters);
char *_getenv(char *env);
int cmd_execute(char **args);
void cmd_loop(void);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
size_t _strlen(const char *s);
char *cmd_read_line(void);
void free_array(char **str);



extern char **environ;

#endif

