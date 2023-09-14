#include "shell.h"

/**
 * tokenizeInput - Tokenizes an input string into an array of arguments.
 *
 * @input: The input string
 * @args: An array to store the arguments.
 * @arg_count: A pointer to store the argument count.
 */
void tokenizeInput(char *input, char *args[], int *arg_count)
{
	char *token = strtok(input, " ");
	*arg_count = 0;

	while (token != NULL && *arg_count < MAX_ARGS - 1)
	{
		args[*arg_count] = token;
		(*arg_count)++;
		token = strtok(NULL, " ");
	}
	args[*arg_count] = NULL;
}
