#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: unsigned long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	/* if n = 0, if true binary presentation is also 0*/

	if ((n >> 1) == 0 && n == 0)
	{
		_putchar('0');
		return;
	}

	/*check if n still has some binary digits to print it*/

	if (n >> 1 != 0)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
