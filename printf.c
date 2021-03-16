#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * printer - Uses -printf.
 * @formm: Type of element to print.
 * Return: Function address.
 **/
int (*printer(char formm))(va_list)
{
	type_formating form[] = {
	{'c', print_c},
	{'s', print_s},
	{'i', print_i},
	{'d', print_i},
	{'R', print_rot13},
	{'b', print_b},
	{'r', print_r},
	{'p', print_p},
	{'u', print_u},
	{'x', print_x},
	{'X', print_X},
	{'o', print_o},
	{'\0', NULL}
	};
	int i = 0;

	for (i = 0; form[i].c; i++)
	{
		if (formm == form[i].c)
			break;
	}
	return (form[i].f);
}
/**
 * _printf - a function that produces output according to a format
 * @format: character string
 * Return: 0 success
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, count = 0;
	int (*f)(va_list);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arg, format);
	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar(format[i]);
			    i++;
				count++;
			}
			else if (format[i + 1] == '\0')
			{
				_putchar(format[i]);
				count++;
				return (count);
			}
			else
			{
				f = printer(format[i + 1]);
				if (f != NULL)
				{
					count += f(arg);
					i++;
				}
				else
				{
					_putchar(format[i]);
					count++;	}	}	}
		else
		{	_putchar(format[i]);
			count++;	}	}
	va_end(arg);
	return (count);	}
