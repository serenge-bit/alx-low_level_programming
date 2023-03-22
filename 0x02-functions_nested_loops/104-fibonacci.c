#include <stdio.h>

/**
 * main - the function
 *
 * Return: void
 */
int main(void)
{
	int num;
	unsigned long i, j, k;
	unsigned long m, n, p, carry;

	num = 0;
	i = 0;
	j = 1;
	for (num = 1; num <= 91; num++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (num <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		k = (i + j) + carry;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (num != 98)
			printf(", ");
		num++;
	}
	putchar('\n');
	return (0);
}
