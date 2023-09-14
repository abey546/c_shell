#include "shell.h"

/**
 * handleCommandNotFound - Handles the case when
 * a command is not found in the PATH.
 *
 * @command: The command that was not found.
 * @args: An array of strings representing the command and its arguments.
 */
void handleCommandNotFound(char *command, char *args[])
{
	char error_message[100];
	char command_path[MAX_INPUT_SIZE];
	char *path = custom_getenv("PATH");
	char *path_copy = custom_strdup(path);
	char *token = strtok(path_copy, ":");

	while (token != NULL)
	{
		custom_snprintf(command_path, sizeof(command_path), "%s/%s", token, command);

		if (access(command_path, X_OK) != -1)
		{
			execv(command_path, args);

			perror("execv");
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, ":");
	}

	free(path_copy);

	custom_snprintf(error_message, sizeof(error_message), "./shell: %s: command not found\n", command);
	write(STDERR_FILENO, error_message, custom_strlen(error_message));
	exit(EXIT_FAILURE);
}


