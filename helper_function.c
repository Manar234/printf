#include "main.h"
/**
 * print_number - printf the number
 * @args: the list of args
 * Return: results
 */
int print_number(va_list args)
{
	int digit;

	int check;

	int len;

	unsigned int num;

	digit  = va_arg(args, int);

	check = 1;

	len = 0;

	if (digit < 0)
	{
		len += _putchar('-');
		num = digit * -1;
	}
	else
		num = digit;
	while ((num / check) > 9)
		check *= 10;
	while (check != 0)
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}
	return (len);
}
/**
 * print_unsigned_number - print an unsigned number
 * @args: list of variadic arguments
 * Return: unsigned number
 */
int print_unsigned_number(va_list args)
{
	int check;

	int len;

	unsigned int num;

	check = 1;
	len = 0;
	num = va_arg(args, unsigned int);

	while ((num / check) > 9)
		check *= 10;
	while (check != 0)
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}
	return (len);
}
/**
 * print_char - print a char
 * @args: the arguments
 * Return: char
 */
int print_char(va_list args)
{
	char value;

	value = va_arg(args, int);

	_putchar(value);
	return (1);
}
/**
 * print_string - print an string
 * @args: the arguments
 * Return: string
 */
int print_string(va_list args)
{
	int i;

	const char *s;

	s = va_arg(args, const char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_binary - print a digit in binary format
 * @args: the arguments
 * Return: binary number
 */

int print_binary(va_list args)
{
	unsigned int num;
	int arr[50];
	int i, len;

	len = 0;
	num = va_arg(args, unsigned int);

	i = 0;
	while (num)
	{
		arr[i++] = num % 2;
		num = num / 2;
	}
	i--;
	for (; i >= 0; i--)
		len += _putchar(arr[i] + '0');

	return (len);
}
