#include "main.h"

/**
 * _islower - to print the lower function
 * @c: parameter to be printed
 * Return: 0 if it is lower case
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
