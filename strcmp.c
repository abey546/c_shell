#include "shell.h"

/**
 * custom_strncmp - Compares two strings up to a specified number of characters
 *
 * @s1: The first string
 * @s2: the second string
 * @n: The maximum number of characters to compare
 *
 * Return: Negative value if s1<s2, 0 if s1==s2, positive value if s1>s2
 */
int custom_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (0);
}
