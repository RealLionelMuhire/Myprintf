#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct type
{
	char *identifier;
	int (*print)(va_list);
} type_t;

int _printf(const char *format, ...);
int (*get_func(const char *specifier))(va_list);
int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);

#endif
