#include <stdio.h>

/**
 * main - The function
 *
 * @inpt: tested number
 *
 * Return: always 0
 */
void prime_factors(long inpt);
/**
 * main - entry point
 *
 * Return: it will be 0
 */
int main(void)
{
	prime_factor(612852475143);
	return (0);
}
/**
 * prime_factors - name for function
 *
 * @inpt: tested number
 *
 * Return: it is empty
 */
void prime_factors(long inpt)
{
	long factor = 2;

	while (factor != inpt)
	{
		if (inpt % factor == 0)
		{
			inpt /= divisor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", inpt);
}
