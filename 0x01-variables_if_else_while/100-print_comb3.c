#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 if void
 */

int main(void)

{	int l;
	int i;

	for (l = 0; i < 10; l++)

	{
		for (i = 1; i < 10; i++)

	{
		if (i < l && i != l)
			{	putchar(l + '0');
				putchar(i + '0');
				if (i + l != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	return (0);
}
