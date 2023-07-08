#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: contains the bits to be flipped
 * @m: act of flipping to get here
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int j = 0;

	i = n ^ m;

	for (j = 0; i != 0; j += 1)
		i &= (i - 1);
	return (j);
}
