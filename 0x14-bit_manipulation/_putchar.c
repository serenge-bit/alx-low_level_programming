#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: The character to print
 *
 * Return: if successful 1.
 * On error, -1 is returned, and errno is set appropriately in the code.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
