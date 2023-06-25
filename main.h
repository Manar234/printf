#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
#include<unistd.h>
#include<math.h>

/* Helper functions */
void handle_specifier(char ch, va_list args, int count);



int _printf(const char *format, ...);
int _putchar(char c);

typedef struct fn
{
	char *g;
	int (*f)(va_list)
}f_v;

#endif /*MAIN_H*/
