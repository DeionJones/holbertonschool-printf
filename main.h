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
int _strlen(char *s);
int _putchar(char c);
void print_c(va_list args);
void print_s(va_list args);
void print_i(va_list args);
void _recursion_integer(int t);

#endif /* _MAIN_H_ */
