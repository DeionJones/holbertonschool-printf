#include "main.h"
#include <stdlib.h>

/**
 * _print_format - Prints a format
 * @format: The format to prints
 * @args: A list of variadic arguments
 *
 * Return: The length of the format
 */
int _print_format(const char *format, va_list args) {
  int count = 0;
  int i = 0;

  while (format && format[i]) {
    if (format[i] == '%') {
      if (format[i + 1] == '\0')
        return (-1);

      i++;

      while (format[i] == ' ')
        i++;

      if (format[i] == '%')
        count += _write(format[i]);

      if (_validate_char(format[i]) == 0) {
        count = _print_invalid_spec(format[i - 1], format[i], count);
      } else {
        count += _print_spec(format[i], args);
      }
    } else {
      count += _write(format[i]);
    }

    i++;
  }

  return (count);
}

/**
 * _print_spec - Prints a valid specifier
 * @format: The specifier to prints
 * @args: A list of variadic arguments
 *
 * Return: The length of the specifier
 */
int _print_spec(char format, va_list args) {
  int i = 0, length = 0;
  spc_dt _types[] = {{"c", _print_a_char},
                     {"s", _print_a_string},
                     {"d", _print_a_integer},
                     {"i", _print_a_integer},
                     {NULL, NULL}};

  while (_types[i].specifier) {
    if (*_types[i].specifier == format)
      length = _types[i].f(args);

    i++;
  }

  return (length);
}

/**
 * _validate_char - validates the type
 * @_type: char
 *
 * Return: 1 if char is equal to a type
 */
int _validate_char(char _type) {
  char _types[] = {'c', 's', 'd', 'i', '%'};
  int i = 0;

  while (_types[i]) {
    if (_types[i] == _type)
      return (1);
    i++;
  }
  return (0);
}