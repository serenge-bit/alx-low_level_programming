#include "main.h"

/**
 * _isdigit - name of parameter
 *
 * Return: 1 if a digit
 * 0 otherwise
 *
 * @c: parameters
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
