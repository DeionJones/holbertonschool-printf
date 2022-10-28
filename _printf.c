#include "main.h"

/**
 * int _printf(const char *format, ...) - prints number of characters
 * @format: character string
 * Return - number of characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	length = _print_format(format, args);
	va_end(args);
	return (length);
}
	
