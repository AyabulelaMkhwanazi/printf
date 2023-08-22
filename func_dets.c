#include "main.h"

/**
 * mod_add - function for %.
 *
 * @all: variadic argument pointer name.
 *
 * Return: The number of chcaracters outputted.
 */
int mod_add(__attribute__((unused))va_list all)
{
        char a = '%';

        write(1, &a, 1);
        return (1);
}
