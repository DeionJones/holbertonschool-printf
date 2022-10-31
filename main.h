#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * struct specifiers - struct specifiers
 * @specifier:  The conversion specifier
 * @f: The function pointer
 */
typedef struct specifiers {
  char *specifier;
  int (*f)(va_list args);
} spc_dt;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
void print_c(va_list ar);
void print_s(va_list ar);
void print_i(va_list ar);
void _recursion_integer(int i);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _validate_char(char _type);
#endif
