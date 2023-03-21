#include "main.h"

/**
 * print_alphabet - print 10 times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int j;
	char k;

		for (j = 1; j <= 10; j++)
		{
			for (k = 'a'; k <= 'z'; k++)
				_putchar(k);
			_putchar('\n');
		}
}
