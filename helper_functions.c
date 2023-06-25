#include "main.h"

/**
 * handle_specifier - handle conversion specifier
 * @ch: first argument
 * @args: second argument
 * @count: third argument
 */

void handle_specifier(char ch, va_list args, int count)
{
	char *str;

	switch (ch)
	{
		case 'c':
		{
			_putchar(va_arg(args, int));
			count++;
			break;
		}
		case 's':
		{
			str = va_arg(args, char *);
			while (*str)
			{
				_putchar(*str++);
				count++;
			}
		}
		break;
		case '%':
		{
			_putchar(va_arg(args, int));
			count++;
			break;
		}
	}
}
