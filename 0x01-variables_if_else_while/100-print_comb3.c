#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 if void
 */

int main(void)

{	int l;
	int i;

	for (l = 0; l <= 9; l++)

	{
		for (i = 1 + 1; i <= 9; i++)
		{

			{	putchar(l + '0');
				putchar(i + '0');
				if (l == 8 && i == 9)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
