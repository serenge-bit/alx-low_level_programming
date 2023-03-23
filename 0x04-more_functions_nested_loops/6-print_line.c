#include "main.h"
/**
 * print_line - main function
 *
 * @n: parameters
 *  Return: void
 */
void print_line(int n)
{
	int a = 0;

	while (n > 0 && a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
