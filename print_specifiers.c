#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - print a char
 * @args: list of variadic args
 *
 * Return: Length of character
 */
int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * print_s - prints a string
 * @args: list of variadic arguments
 *
 * Return: length of string
 */
int print_s(va_list args)
{
	char *ar = va_arg(args, char *);
	int i = 0;

	if (ar != NULL)
	{
		while (ar[i])
		{
			_putchar(ar[i]);
			i++;
		}
		return (i);
	}
	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}
/**
 * print_i - prints an int
 * @args: a list of variadic arguments
 *
 * Return: length if string
 */
int print_i(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	_recursion_integer(m);
	return (count);

}
/**
 * _recursion_integer - prints an integer
 * @a: integer to print
 *
 * Return: Nothing
 */
int _recursion_integer(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		_recursion_integer(t / 10);
	_putchar(t % 10 + '0');
	return (0);
}
