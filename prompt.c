#include "shell.h"

/**
 * displayPrompt - Displays a prompt if in interactive mode.
 * @interactive: Flag indicating interactive mode.
 */
void displayPrompt(int interactive)
{
	if (interactive)
	{
		write(STDOUT_FILENO, "($) ", 4);
	}
}
