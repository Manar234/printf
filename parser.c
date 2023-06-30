#include "main.h"
/**
 * conv_spec - a function to loop through the format string
 * @format: a string
 * @funct_list: an array of struct
 * @args: args of type va_list
 * Return: an int
 */
int conv_spec(const char *format, func_t funct_list[], va_list args)
{
	int i, j, length, found;

	length = 0;
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%') /* loop through format string */
		{
			for (j = 0; funct_list[j].sm != NULL; j++) /* loop through struct */
			{
				if (*(format + i + 1) == funct_list[j].sm[0])
				{
					found = funct_list[j].f(args);
					if (found == -1)
						return (-1);
					length += found;
					break;
				}
			}
			if (funct_list[j].sm == NULL && *(format + i + 1) != ' ') /* check if conversion_specifier is NULL */ 
			{														/* and the next character is not an empty string */
				if (*(format + i + 1) != '\0')
				{
					_putchar(*(format + i));
					_putchar(*(format + i + 1));
					length = length + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(*(format + i));
			length++;
		}
	}
	return (length);
}
