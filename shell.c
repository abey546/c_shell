#include "shell.h"
/**
 * main - The main function of the shell program.
 * Return: The exit status of the program.
 */
int main(void)
{
	pid_t pid;
	char *input = NULL;
	char *args[MAX_ARGS];
	int arg_count;
	int interactive = isatty(STDIN_FILENO);

	while (1)
	{
		displayPrompt(interactive);
		input = getInput();

		if (input == NULL)
		{
			if (interactive)
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			break;
		}
		tokenizeInput(input, args, &arg_count);
		if (custom_strncmp(args[0], "exit", 4) == 0)
		{
			free(input);
			break;
		}
		if (custom_strncmp(args[0], "env", 3) == 0)
		{
			printEnvironmentAllowed();
			free(input);
			continue;
		}
		pid = fork();

		if (pid < 0)
		{
			perror("Fork failed");
			free(input);
			exit(EXIT_FAILURE);
		}
		if (pid == 0)
		{
			executeCommand(args);
			free(input);
			exit(EXIT_SUCCESS);
		}
		else
		{
			wait(NULL);
			free(input);
		}
	}
	return (0);
}
