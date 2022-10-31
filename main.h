#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * struct specifiers - struct specifiers
 * @specifier:  The conversion specifier
 * @f: The function pointer
 */
typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spc_dt;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_i(va_list args);
int _recursion_integer(int t);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _validate_char(char _type);
#endif /* _MAIN_H_ */
