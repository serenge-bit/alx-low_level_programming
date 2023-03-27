#include "main.h"

/**
 * swap_int - swaping integers
 * @a: the pointer
 * @b: the pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
