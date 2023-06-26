#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
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

int parser(const char *format, func_t funct_list[], va_list args);

int p_c(va_list);

int p_str(va_list args);

int p_per(va_list);

int print_unsgined_number(unsigned int n);

int print_number(va_list);

int p_int(va_list);
#endif
