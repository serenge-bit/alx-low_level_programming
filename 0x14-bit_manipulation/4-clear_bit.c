#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a specific index
 * @index: indexing starting from 0
 * @n: pointing to number
 * Return: 1 | -1(if an error occured)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
