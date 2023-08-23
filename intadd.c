#include <stdio.h>
#include "main..h"
#include <stdlib.h>

char *intadd(int inpu)
{
	char memstor[28];
	char memstorer[28];
	char *memstore;
	int k, r, x, p;

	while (inpu < 0)
	{
		inpu = inpu * -1;
	}
	r = 0;

	do
	{
		memstor[r] = '0' + (inpu % 10);
		inpu /= 10;
		r++;
	} while (inpu > 0);

		k = (r - 1);

		x = 0;

		memstore = malloc(r);

		while (k >= 0)
		{
			memstorer[x++] = memstor[k];
			k--;
		}
		p = 0;

		while (p < x)
		{
			memstore[p] = memstorer[p];
			p++;
		}
		return (memstore);
		free (memstore);
}
