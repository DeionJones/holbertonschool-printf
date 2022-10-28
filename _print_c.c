#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_c - print a char
 * @c: chaar to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c int));
}
