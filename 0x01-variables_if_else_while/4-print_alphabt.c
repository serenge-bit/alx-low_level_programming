#include <stdio.h>
/**
 * main - main funtion
 *
 * Return: always o if void
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	if (i != 'q' && i != 'e')
	putchar(i);
	return (0);
}
