#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
/**
 * struct formating - structure to print miltiple types
 * @c: type to print
 * @f:func to print
 */
typedef struct formating
{
char c;
int (*f)(va_list);
} type_formating;
int _printf(const char *format, ...);
int print_s(va_list arg);
int print_c(va_list arg);
int print_i(va_list arg);
int print_b(va_list arg);
int print_r(va_list arg);
int print_p(va_list arg);
int print_u(va_list arg);
int print_x(va_list arg);
int print_X(va_list arg);
int print_o(va_list arg);
int print_rot13(va_list arg);
int _putchar(char c);
#endif
