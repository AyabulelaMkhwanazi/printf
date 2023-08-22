#include "main.h"

/**
 * char_add - function handles the conversion specifier c
 * and writes it to stdout
 *
 * @all: variadic list name
 *
 * Return: On success 1.
 */
int char_add(va_list all)
{
	char c = va_arg(all, int);

	write(1, &c, 1);
	return (1);
}

/**
 * str_add - function handles the conversion specifier s
 * and writes it to stdout
 *
 * @all: variadic list name
 *
 * Return: On success 1.
 */
int str_add(va_list all)
{
	char *str = va_arg(all, char *);
	int len = _strlen(str);

	write(1, str, len);
	return (len);
}

/**
 * mod_add - function handles %
 *
 * @all: variadic list name
 *
 * Return: On success 1.
 */
int mod_add(__attribute__((unused))va_list all)
{
	char a = '%';

	write(1, &a, 1);
	return (1);
}

/**
 * int_add - function handles conversion specifier d and i
 * and writes it to stdout
 *
 * @all: variadic list name
 *
 * Return: On success 1.
 */
int int_add(va_list all)
{
	int count = 0;

	int n = va_arg(all, int);

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		count++;
	}
	count += print_int(n);
	return (count);
}

/**
 * print_int - function prints digits of a number
 * using recursion
 *
 * @n: the number
 *
 * Return: number of digits.
 */
int print_int(int n)
{
	char c;
	int count = 0;

	if (n == 0)
	{
		return (0);
	}

	if (n >= 10)
	{
		count += print_int(n / 10);
	}

	c = (n % 10) + '0';

	write(1, &c, 1);
	count++;

	return (count);

}