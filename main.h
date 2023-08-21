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
	void (*func)(va_list);
} det_t;

int _printf(const char *format, ...);
void mod_add(va_list all);
void str_add(va_list all);
void mod_add(va_list all);
void char_add(va_list all);
int _putchar(char c);

#endif
