#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int i;
	int mod;

	mod = 0;

	for (i = 0; i < 10; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			mod = mod + i;
		}
	}
	printf("%d\n", mod);
	return (0);
}
