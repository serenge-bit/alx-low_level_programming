#include "main.h"

/**
 * binary_to_uint -binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number found
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[a] != '\0')
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		result <<= 1;

		if (b[a] & 1)
			result += 1;
		a += 1;
	}
	return (result);
}
