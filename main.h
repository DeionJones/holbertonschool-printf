#include <stdarg.h>
#ifndef main_h
#define main_h

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
void print_c(va_list ar);
void print_s(va_list ar);
void print_i(va_list ar);
void _recursion_integer(int i);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _validate_char(char _type);
#endif
