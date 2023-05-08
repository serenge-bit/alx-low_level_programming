#include "main.h"
#define BUF_SIZE 1024

/**
* main - main head
* @argc: number of arguments to be passed
* @argv: a pointer point to the array of arguments
* Return: Always 0
**/

int main(int argc, char **argv)
{
	int fl0, fl1, res0, res1;
	char *buffers;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffers = malloc(sizeof(char) * BUF_SIZE);
	if (!buffers)
		return (0);

	fl1 = open(argv[1], O_RDONLY);
	error_98(fl1, buffers, argv[1]);
	fl0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(fl0, buffers, argv[2]);
	do {
		res0 = read(fl1, buffers, BUF_SIZE);
		if (res0 == 0)
			break;
		error_98(res0, buffers, argv[1]);
		res1 = write(fl0, buffers, res0);
		error_99(res1, buffers, argv[2]);
	} while (res1 >= BUF_SIZE);
	res0 = close(fl0);
	error_100(res0, buffers);
	res0 = close(fl1);
	error_100(res0, buffers);
	free(buffers);
	return (0);
}

/**
* error_98 - checks error 98
* @f0: the value to check
* @buffer: the buffer
* @argv: argument
**/
void error_98(int f0, char *buffer, char *argv)
{

	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
* error_99 - checks error 99
* @f0: value to check
* @buffer: the buffer
* @argv: argument
*/
void error_99(int f0, char *buffer, char *argv)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
* error_100 - checks error 100
* @f0: the value to check
* @buffer: the buffer
*/
void error_100(int f0, char *buffer)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f0);
		free(buffer);
		exit(100);
	}
}
