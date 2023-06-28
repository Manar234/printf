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

/**
 * print_address - print the address of a memory locaation
 * @args: the list of variadic arguments
 * Return: the memory address
 */

int print_address(va_list args)
{
	int i, len;
	unsigned long mem_address;
	int arr[50];
	char alpha_num[] = "0123456789abcdef";
	void *address = va_arg(args, void *);

	len = 0;

	if (address == NULL)
		return (write(1, "(nil)", 5));

	mem_address = (unsigned long)address;

	i = 0;
	while (mem_address)
	{
		arr[i++] = alpha_num[mem_address % 16];
		mem_address = mem_address / 16;
	}
	arr[i++] = 'x';
	arr[i++] = '0';

	i--;
	for (; i >= 0; i--)
		len += _putchar(arr[i]);

	return (len);
}
