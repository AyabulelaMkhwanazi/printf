#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void prntadd(char memstor[], int *memunit)
{
	int r;

	if (*memunit > 0)
	{
		r = 0;

		while (r < *memunit)
		{
			charadd(memstor[r]);
			r++;
		}
	}
	*memunit = 0;
}
