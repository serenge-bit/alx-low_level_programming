#include <stdio.h>

/**
 * main - main funtion
 *
 * Return: if void its 0
 */

int main(void)

{	int d;

	for (d = 0; d < 10; d++)

	{	putchar(d + '0');
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);

}
