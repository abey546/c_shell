#include "shell.h"

/**
 * executeCommand - Executes a command with specified arguments
 *
 * @args: An array of strings representing the command and its arguments
 */

void executeCommand(char *args[])
{
	if (access(args[0], X_OK) == -1)
	{
		handleCommandNotFound(args[0], args);
	}
	else
	{
		executeCommandWithPath(args);
	}
}
