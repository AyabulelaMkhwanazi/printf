#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0.
*/
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len2);
	printf("Length:[%d, %i]\n", len, len2);
	_printf("String:[%s]\n", "The string !");
	printf("String:[%s]\n", "The string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");





	return (0);
}