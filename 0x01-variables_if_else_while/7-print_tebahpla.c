#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)

{	char c;

	for (c = 'z'; c >= 'a'; c--)
	putchar(c);
	putchar('\n');

	return (0);
}

