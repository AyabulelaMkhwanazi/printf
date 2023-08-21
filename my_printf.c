#include "main.h"

/**
 * _printf - writes formated string to stdout
 *
 * @format: string with format specifiers
 *
 * Return: number of characters outputted/written
 */
int _printf(const char *format, ...)
{
	det_t dets[] = {
		{"c", char_add},
		{"s", str_add},
		{"%", mod_add},
		{NULL, NULL},
	};
	int i;
	int counter = 0;
	int j;

	va_list all;

	va_start(all, format);

	for(i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			for (j = 0; dets[j].det; j++)
			{
				if (*(format + i + 1) == dets[j].det[0])
				{
					dets[j].func(all);
					i++;
					counter++;
					break;
				}
			}
		}
		else
		{
			_putchar(*(format + i));
			counter++;
		}
	}
	va_end(all);
	return (counter);

}

