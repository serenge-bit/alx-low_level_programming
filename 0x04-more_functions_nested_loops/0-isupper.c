#include "main.h"

/**
 * _isupper - main function
 *
 * Return: 1 if uppercase
 * 0 otherwise
 *
 * @c: parameters
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
