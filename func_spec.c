#include "main.h"

/**
 * char_add - function handles the conversion specifier c
 * and writes it to stdout
 *
 * @all: variadic list name
 *
 * Return: void.
 */
void char_add(va_list all)
{
	char c = va_arg(all, int);

	write(1, &c, 1);
}

/**
 * str_add - function handles the conversion specifier s
 * and writes it to stdout
 *
 * @all: variadic list name
 *
 * Return: void.
 */
void str_add(va_list all)
{
	int r = 0;

	char *str = va_arg(all, char *);

	while (*(str + r) != '\0')
	{
		_putchar(*(str + r));
		r++;
	}
}

/**
 * mod_add - function handles %
 *
 * @all: variadic list name
 *
 * Return: void.
 */
void mod_add(__attribute__((unused))va_list all)
{
	char a = '%';

	write(1, &a, 1);
}
