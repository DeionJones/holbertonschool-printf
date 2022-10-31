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
<<<<<<< HEAD
int print_c(va_list args);
int print_s(va_list args);
int print_i(va_list args);
int _recursion_integer(int t);

#endif /* _MAIN_H_ */
=======
int print_c(va_list ar);
int print_s(va_list ar);
int print_i(va_list ar);
int  _recursion_integer(int i);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _validate_char(char _type);
#endif /* _MAIN_H_ */
>>>>>>> 10b39d33900204cb855c3dbe9354ee7ca9bc568a
