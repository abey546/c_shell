#include "shell.h"

/**
 * custom_getenv - Retrieves the value of an environment variable.
 *
 * @name: The name of the environment variable.
 *
 * Return: A pointer to the value of the variable, or NULL if not found
 */
char *custom_getenv(const char *name)
{
	/* extern char **environ; */
	size_t name_len = custom_strlen(name);
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		if (custom_strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
		{
			return (*env + name_len + 1);
		}
	}
	return (NULL);
}
