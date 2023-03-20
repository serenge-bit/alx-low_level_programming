#include <stdio.h>

/**
 * main - main funtion
 *
 * Return: if void its 0
 */

int main(void)

{	int d;

	for (d = 0; d < 10; d++)
	{	putchar(d);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);

}
