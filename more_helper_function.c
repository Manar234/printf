#include "main.h"

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

/**
 * print_octal - print a digit in octal format
 * @args: the list of variadic arguments
 * Return: octal number
 */

int print_octal(va_list args)
{
	int arr[50];
	int i, len;
	unsigned int num;

	len = 0;
	num = va_arg(args, unsigned int);

	i = 0;
	while (num)
	{
		arr[i++] = num % 8;
		num = num / 8;
	}
	i--;
	for (; i >= 0; i--)
		len += _putchar(arr[i] + '0');

	return (len);
}

/**
 * print_hex_low - print a digit in hexadecimal lowercase format
 * @args: the list of variadic arguments
 * Return: hexadecimal number in lowercase format
 */

int print_hex_low(va_list args)
{
	int i, len;
	unsigned int num;
	int arr[50];
	char alpha_num[] = "0123456789abcdef";

	len = 0;
	num = va_arg(args, unsigned int);

	i = 0;
	while (num)
	{
		arr[i++] = alpha_num[num % 16];
		num = num / 16;
	}
	i--;
	for (; i >= 0; i--)
		len += _putchar(arr[i]);

	return (len);
}

/**
 * print_hex_up - print a digit in hexadecimal uppercase format
 * @args: the list of variadic arguments
 * Return: hexadecimal number in uppercase format
 */

int print_hex_up(va_list args)
{
	int i, len;
	unsigned int num;
	int arr[50];
	char alpha_num[] = "0123456789ABCDEF";

	len = 0;
	num = va_arg(args, unsigned int);

	i = 0;
	while (num)
	{
		arr[i++] = alpha_num[num % 16];
		num = num / 16;
	}
	i--;
	for (; i >= 0; i--)
		len += _putchar(arr[i]);

	return (len);
}

