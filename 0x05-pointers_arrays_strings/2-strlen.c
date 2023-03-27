#include "main.h"

/**
 * _strlen - return lenght of a string
 * @s: string pointer
 * Return: always one
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);	
}
