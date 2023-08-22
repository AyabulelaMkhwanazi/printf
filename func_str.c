#include "main.h"

/**
 * _strlen - function returns the length of a string
 *
 * @str: pointer to the string
 *
 * Return: the length
 */
int _strlen(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}