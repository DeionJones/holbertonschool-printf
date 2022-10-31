#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_c - print a char
 * @ar: char to print
 *
 * Return: void
 */
void print_c(va_list ar)
{
	_putchar(va_arg(ar int));
	return (1);
}
/**
 * print_s - prints a string
 * @ar: string to print
 *
 * Return: length of string
 */
void print_s(va_list ar)
{
	char *ar = va_arg(ar, char *);
	int i = 0;

	if (s != NULL)
	{
		while (s[i])
		{
			_putchar(s[i]);
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
 * @ar: int to print
 *
 * Return: void
 */
void print_i(va_list ar)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(ar, int);
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
		count++
	}

	_recursion_integer(m);
	return (count);
}
/**
 * _recursion_integer - prints an integer
 * @i: integer to print
 *
 * Return: Nothing
 */
void _recursion_iteger(int i)
{
	unsigned int t;

	t = a;
	if (t / 10)
		_recursion_integer(t / 10);
	_putchar(t % 10 + '0');
}
