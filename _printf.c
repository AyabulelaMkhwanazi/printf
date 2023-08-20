#include "main.h"

/**
 * _printf - function produces output according to a format
 *
 * @format: the character string.
 *
 * Return: number of characters printed
 * (excluding the '\0')
 */
int _printf(const char *format, ...)
{
	va_list all;

	spc_t spcs[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_perc},
		{NULL, NULL}
	};
	int i;
	int j;
	int count;

	va_start(all, format);

	for (i = 0; *(format + i) != '\0'; i++)
	{

		if (*(format + i) == '%')
		{
			for (j = 0; spcs[j].spc; j++)
			{
				if (*(format + i + 1) == spcs[j].spc[0])
				{
					spcs[j].func(all);
					count++;
					i++;
					break;
				}
			}
		}
		else
		{
			_putchar(*(format + i));
			count++;
		}
	}
	va_end(all);
	return (count);
}