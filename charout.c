#include "main.h"

/**
 * charout - outputs  g to stdout
 *
 * @g: the character
 *
 * Return: Number of character outputted.
 */
int charout(char g)
{
	return (write(1, &g, 1));
}