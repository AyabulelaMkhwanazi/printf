#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct det - struct for specifiers
 *
 * @det: specifiers
 * @func: function pointer to the specific specifier
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

int print_int(int n);
int _strlen(char *str);

#endif
