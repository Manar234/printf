#include "main.h"
/**
 * parser - a function to loop through the format string
 * @format: a string
 * @funct_list: an array of struct
 * @args: args of type va_list
 * Return: an int
 */
int parser(const char *format, func_t funct_list[], va_list args)
{
	int i, j, r_val, length;

	length = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%') /* loop through format string */
		{
			for (j = 0; funct_list[j].sm != NULL; j++) /* loop through struct */
			{
				if (format[i + 1] == funct_list[j].sm[0])
				{
					r_val = funct_list[j].f(args);
					if (r_val == -1)
						return (-1);
					length += r_val;
					break;
				}
			}
			if (funct_list[j].sm == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					length = length + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
	}
	return (length);
}
