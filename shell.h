#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdarg.h>

#define MAX_INPUT_SIZE 1024
#define MAX_ARGS 64
extern char **environ;
size_t custom_strlen(const char *str);
int custom_strncmp(const char *s1, const char *s2, size_t n);
char *custom_strdup(const char *str);
int custom_snprintf(char *str, size_t size, const char *format, ...);
char *custom_getenv(const char *name);
void printEnvironmentAllowed(void);
void executeCommand(char *args[]);
void handleCommandNotFound(char *command, char *args[]);
void executeCommandWithPath(char *args[]);
void displayPrompt(int interactive);
char* getInput(void);
void tokenizeInput(char *input, char *args[], int *arg_count);

#endif /* SHELL_H */
