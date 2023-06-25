#include "main.h"

#include <stdint.h>
/**
 * _printf - function to print
 * @format: the arguments
 * Return: results
 */
int _printf(const char *format, ...)
{
	int length;

	func_t funct_list[] = {
		{"c", p_c},

		{"s", p_str},

		{"%", p_per},

		{"d", p_int},

		{"i", p_int},

		{NULL, NULL}
	};



	va_list args;

	if (format == NULL)

		return (-1);

	va_start(args, format);

	/** call a parser function*/



	length = parser(format, funct_list, args);

	va_end(args);

	return (lenght);
}
