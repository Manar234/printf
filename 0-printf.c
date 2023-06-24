#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a memory address(a string)
 * @...: the number of arguments
 * Return: an integer
 */

int _printf(const char *format, ...)
{
	int i;
	int len;
	char cval, pval;
	char *sval;
	va_list args;

	len = strlen(format);

	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			continue;
		}
		switch (format[++i])
		{
			case 'c':
				cval = (char)va_arg(args, int);
				_putchar(cval);
				break;
			case 's':
				sval = va_arg(args, char *);
				printf("%s", sval);
				break;
			case '%':
				pval = (char)va_arg(args, int);
				_putchar(pval);
				break;
			default:
				break;
		}
	}

	va_end(args);

	return (len);
}


