#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a memory address(a string)
 * @...: the number of arguments
 * Return: an integer
 */

int _printf(const char *format, ...)
{
	char *s;
	va_list args;

	va_start(args, format);

	while(*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			format++;
			continue;
		}
		switch (*format++)
		{
			case 'c':
				_putchar((char)va_arg(args, int));
				break;
			case 's':
				s = va_arg(args, char *);
				while(*s++)
					_putchar(*s);
				break;
			case '%':
				_putchar((char)va_arg(args, int));
				break;
		}
	}

	va_end(args);

	return (strlen(format));
}


