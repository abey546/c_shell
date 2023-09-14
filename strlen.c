#include "shell.h"

/**
 * custom_strlen - returns the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
size_t custom_strlen(const char *str)
{
	const char *s = str;

	while (*s)
	{
		++s;
	}
	return (s - str);
}
