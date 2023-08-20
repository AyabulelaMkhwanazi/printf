#include "main.h"

/**
 * print_char - function prints a character type
 *
 * @all: variadic function name.
 *
 * Return: void
 */
void print_char(va_list all)
{
	char c = (char)va_arg(all, int);

	_putchar(c);
}

/**
 * print_str - function prints a string type
 *
 * @all: variadic function name.
 *
 * Return: void
 */
void print_str(va_list all)
{
	int i;
	char *str = va_arg(all, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}

void print_perc(va_list all)
{
	(void)all;
	_putchar('%');
}