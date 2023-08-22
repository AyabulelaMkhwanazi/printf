#include "main.h"

/**
 * _printf - Outputs format controlled and normal strings to the console.
 *
 * @format: string with or without formatters.
 * ...: A symbol or denotation of a variadic function.
 *
 * Return: number of characters outputted to the ccnsole.
 */
int _printf(const char *format, ...)
{

	det_t dets[] = {
		{'c', char_add},
		{'s', str_add},
		{'%', mod_add},
		{'d', int_add},
		{'i', int_add},
		{'\0', NULL},
	};
	int r;
	int rec = 0;
	int p;

	va_list all;

	va_start(all, format);

	for (r = 0; *(format + r) != '\0'; r++)
	{
		if (*(format + r) == '%')
		{
			for (p = 0; dets[p].det; p++)
			{
				if (*(format + r + 1) == dets[p].det)
				{
					dets[p].func(all);
					r++;
					rec++;
					break;
				}
			}
		}
		else
		{
			charout(*(format + r));
			rec++;
		}
	}
	va_end(all);
	return (rec);
}
