#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a memory address(a string)
 * @...: the number of arguments
 * Return: an integer
 */

int _printf(const char *format, ...)
{
	int flag = 0;
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		/* normal character: 0, conversion specifier char: 1 */
		if (flag == 0)
		{
			if (*format == '%')
				flag = 1;
			else
			{
				_putchar(*format);
				count++;
			}
		}
		else if (flag == 1)
		{
			/* handle specifier function */
			handle_specifier(*format, args, count);
			flag = 0;
		}
		format++;
	}
	va_end(args);
	return (count);
}
