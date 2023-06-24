#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: they charater to print
 * Return: On success 1
 * On error, -1 is returned and error is set appropri
ately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
