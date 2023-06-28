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
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"u", print_unsigned_number},
		{"o", print_octal},
		{"x", print_hex_low},
		{"X", print_hex_up},
		{"p", print_address},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)

		return (-1);

	va_start(args, format);

	/** check for conversion specifier  */
	length = conv_spec(format, funct_list, args);

	va_end(args);

	return (length);
}

/**
 * print_percent - print a percent
 * @args: the arguments
 * Return: a percent
 */

int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - print an integer
 * @args: the arguments
 * Return: int
 */

int print_integer(va_list args)
{
	int num;

	num = print_number(args);

	return (num);
}
