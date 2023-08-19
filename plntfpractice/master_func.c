#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "plntfheader.h"

int _printf(const char *format, ...)
{
	int outs = 0;
	int memunit = 0;
	char memstor[1024];
	va_list arg_scroll;

	va_start(arg_scroll, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				memstor[memunit++] = '%';
				if (memunit == 1024)
				{
					outs += memunit;
					prntadd(memstor, &memunit);
				}
			}
			else if (*format == 'c')
			{
				memstor[memunit++] = va_arg(arg_scroll, int);
				if (memunit == 1024)
				{
					outs += memunit;
					prntadd(memstor, &memunit);
				}
			}
			else if (*format == 's')
			{
				char *tempint = va_arg(arg_scroll, char *);
				while (*tempint)
				{
					memstor[memunit++] = *tempint;
					tempint++;
					if (memunit == 1024)
					{
						outs += memunit;
						prntadd(memstor, &memunit);
					}
				}
			}
			else if (*format == 'i' || *format == 'd')
			{
				int inpu = va_arg(arg_scroll, int);
				char *tempinteg = intadd(inpu);
				if (inpu < 0)
				{
					memstor[memunit++] = '-';
					while (*tempinteg)
					{
						memstor[memunit++] = *tempinteg;
						tempinteg++;
					}
				}
				else
				{
					while (*tempinteg)
					{
						memstor[memunit++] = *tempinteg;
						tempinteg++;
					}
				}
				if (memunit == 1024)
				{
					outs += memunit;
					prntadd(memstor, &memunit);
				}
			}
		}
		else
		{
			memstor[memunit++] = *format;
			if (memunit == 1024)
			{
				outs += memunit;
				prntadd(memstor, &memunit);
			}
		}
		format++;
	}
	outs += memunit;
	prntadd(memstor, &memunit);

	va_end(arg_scroll);
	return (outs);
}
