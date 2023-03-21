#include "main.h"

/**
 * _isalpha - checks for alphabet
 *
 * Return: always 0
 * and 0 otherwiae
 *
 * @c: this is the parameter
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 122) || (c >= 65 && c <= 90))

		return (1);
	else
		return (0);


}
