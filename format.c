#include "shell.h"

/**
 * custom_snprintf - Formats a string and stores
 * the results in a character array.
 *
 * @str: The destination string
 * @size: The size of the destination array.
 * @format: The size of the destination array.
 *
 * Return: The number of characters written.
 */
int custom_snprintf(char *str, size_t size, const char *format, ...)
{
	int result;
	va_list args;

	va_start(args, format);

	result = vsnprintf(str, size, format, args);
	va_end(args);

	return (result);
}
