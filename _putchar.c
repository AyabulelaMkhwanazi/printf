#include "main.h"

/**
 * charout - writes g to stdout
 *
 * @g: the character
 *
 * Return: on success 1.
 */
int charout(char g)
{
	return (write(1, &g, 1));
}
