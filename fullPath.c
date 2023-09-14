#include "shell.h"

/**
 * executeCommandWithPath - Executes a command with the full path
 * @args: An array of strings representing the command and its arguments
 */
void executeCommandWithPath(char *args[])
{
	execv(args[0], args);
	perror("execv");
	exit(EXIT_FAILURE);
}
