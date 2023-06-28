#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>
/**
 * struct func - struct
 * @sm: char
 * @f: pointer function
 */
struct func
{

	char *sm;

	int (*f)(va_list);

};
typedef struct func func_t;

int _putchar(char c);
int _printf(const char *format, ...);

int conv_spec(const char *format, func_t funct_list[], va_list args);

/* functions to print characters and string */
int print_char(va_list);
int print_string(va_list args);
int print_percent(va_list);

/* functions to print decimal numbers */
int print_unsigned_number(va_list);
int print_number(va_list);
int print_integer(va_list);


/* functions to print different conversion system */
int print_binary(va_list);
int print_octal(va_list);
int print_hex_low(va_list);
int print_hex_up(va_list);
int print_address(va_list);

#endif
