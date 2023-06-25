#include "main.h"
#include <string.h>
#include <stdint.h>
#include <string.h>
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

	return (length);
}
/**
 * p_per - print a percent
 * @args: the arguments
 * Return: a percent
 */
int p_per(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
/**
 * p_int - print an integer
 * @args: the arguments
 * Return: int
 */
int p_int(va_list args)
{
	int num;

	num = print_number(args);

	return (num);
}
