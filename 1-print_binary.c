#include "main.h"

/**
 * print_binary -it  prints the binary representation of the number given
 * @n:  the code unsigned long int
 * Return: not specified
 */

void print_binary(unsigned long int n)
{
	/* check if n is zero, if n is zero, binary representation is also zero*/

	if ((n >> 1) == 0 && n == 0)
	{
		_putchar('0');
		return;
	}

	/*check if n still has some binary digits to print*/

	if (n >> 1 != 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
