#include "shell.h"

/**
 * custom_strdup - Allocates memory and duplicates a string.
 * @str: The input string.
 *
 * Return: A pointer to the duplicated string.
 */
char *custom_strdup(const char *str)
{
	size_t len = custom_strlen(str) + 1;
	char *dup = (char *)malloc(len);

	if (dup)
	{
		memcpy(dup, str, len);
	}
	return (dup);
}
