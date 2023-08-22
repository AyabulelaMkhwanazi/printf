#include "main.h"

/**
 * mod_add - function for %.
 *
 * @all: variadic argument pointer name.
 *
 * Return: The number of characters outputted.
 */
int mod_add(__attribute__((unused))va_list all)
{
        char a = '%';

        write(1, &a, 1);
        return (1);
}
/**
 * int_add _ Function for i and d formatters.
 *
 * @all: variadic argument pointer name.
 *
 * Return: The umber of characters outputted.
 */
int int_add(va_list all)
{
	int p = va_arg(all, int);
	char inte[28];
	int ints = 0;
	int x, r;

	if (p < 0)
	{
		charout('-');
		p = -p;

		r = 0;

		do
		{
			inte[r] = '0' + (p % 10);
			p /= 10;
			r++;
		} while (p > 0);

		x = r - 1;

		while (x >= 0)
		{
			charout(inte[x]);
			x--;
			ints++;
		}
		return (ints);
	}
	else
	{
		r = 0;

		do
		{
			inte[r] = '0' + (p % 10);
			p /= 10;
			r++;
		} while (p > 0);

		x = r - 1;

		while (x >= 0)
		{
			charout(inte[x]);
			x--;
			ints++;
		}
		return (ints);
	}
}
