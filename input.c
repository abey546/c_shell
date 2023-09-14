#include "shell.h"

/**
 * getInput - Reads a line of input from the user.
 *
 * Return: A dynamically allocated string containing the input.
 */
char *getInput(void)
{
	char *input = NULL;
	size_t input_size = 0;

	if (getline(&input, &input_size, stdin) == -1)
	{
		return (NULL);
	}
	input[custom_strlen(input) - 1] = 0;

	return (input);
}
