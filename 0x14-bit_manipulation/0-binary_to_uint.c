#include "main.h"

/**
 *binary_to_uint - binary numbers converted to unsigned it
 *@b: strings of 0 and 1
 *Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	unsigned int outcome = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		outcome <<= 1;

		if (b[x] & 1)
		{
			outcome += 1;
		}
	}
	return (outcome);
}
