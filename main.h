#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct det - Holds the formatters.
 *
 * @det: place holders.
 * @func: function pointer to our add function.
 */
typedef struct det
{
	char *det;
	int (*func)(va_list);
} det_t;

int _printf(const char *format, ...);
int mod_add(va_list all);
int str_add(va_list all);
int char_add(va_list all);
int int_add(va_list all);
int charout(char c);
#endif
