#include "main.h"

/**
 * get_bit - value of a bit returned at a given index
 * @index: index starting from 0 of the bit you want
 * @n: bit to be checked in code
 * Return: index | -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
