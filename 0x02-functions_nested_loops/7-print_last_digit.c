#include "main.h"

/**
 * print_last_digit - function name
 *
 * @a : parameters
 *
 * Return: varies with data type
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (a < 0)
		b = -b;
	return (b);
}
