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
#endif
