#include "main.h"
/**
 * _printf - function name
 * @format: the first argument
 * @...: the number of args
 * Return: results
 */
int _printf(const char *format, ...)
{
	char *s;
	va_list args;

	va_start(args, format);

		while (*format)
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
			while (*s++)
			_putchar(*s);
				break;
			case '%':
			_putchar((char)va_arg(args, int));
				break;
			case 'd':
			_putchar(va_arg(args, int));
				break;
			case 'i':
			_putchar(va_arg(args, int));
				break;
		}
	}
	va_end(args);
	return (strlen(format));
}
