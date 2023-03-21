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
		b = -(b);
	else if (b >= 0)
		b = b;
	return (0);
}
