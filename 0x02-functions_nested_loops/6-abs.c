#include "main.h"

/**
 * _abs - Entry point
 *
 * @b: The parameter
 *
 * Return: Depend on return type
 *
 */
int _abs(int b)
{
	if (b < 0)
	{
	int abs_val;

	abs_val = b * -1;
	return (abs_val);
	}
	return (b);
}
