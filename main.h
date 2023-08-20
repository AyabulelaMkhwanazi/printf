#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct spc - struct for specifiers
 *
 * @spc: the specifier
 *
 * @func: pointer to function to execute/print
 * selected specifier
 *
 * Return: nothing.
 */
typedef struct spc
{
	char *spc;
	void (*func)(va_list);
} spc_t;

int _printf(const char *format, ...);

void print_char(va_list all);
void print_str(va_list all);
void print_perc(va_list all);
int _putchar(char c);

#endif
