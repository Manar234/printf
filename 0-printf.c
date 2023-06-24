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

		switch(format[++i])
		{
			case 'c':
				break;
			case 's':
				break;
			default:
				break;
		}
	}

	va_end(args);

	return (len);
}


