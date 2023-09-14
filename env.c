#include "shell.h"

/**
 * printEnvironmentAllowed - Prints all environment variables allowed.
 */
void printEnvironmentAllowed(void)
{
	/* extern char **environ; */
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		write(STDOUT_FILENO, *env, custom_strlen(*env));
		write(STDOUT_FILENO, "\n", 1);
	}
}
