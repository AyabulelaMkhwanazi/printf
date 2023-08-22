#include "main.h"

/**
 * char_add - function for formatter c
 *
 * @all: variadic argument pointer variable inputted.
 *
 * Return: Number of character outputted.
 */
int char_add(va_list all)
{
	char c = va_arg(all, int);

	charout(c);
	return (1);
}

/**
 * str_add - function for formatter s.
 *
 * @all: variadic argument pointer variable name.
 *
 * Return: Number of chars outputted.
 */
int str_add(va_list all)
{
	int o = 0;
	char *str = va_arg(all, char *);

	while (*(str + o) != '\0')
	{
		charout(*(str + o));
		o++;
	}
	return (o);
}
