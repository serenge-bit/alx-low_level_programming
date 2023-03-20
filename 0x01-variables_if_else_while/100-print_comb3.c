#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 if void
 */

int main(void)

{	int t;
	int i;

	for (t = 0; t <= 9; t++)

	{
		for (i = t + 1; i <= 9; i++)
		{

			putchar(t + '0');
			putchar(i + '0');
			if (t == 8 && i == 9)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	return (0);
}
