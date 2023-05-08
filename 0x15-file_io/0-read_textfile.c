#include "main.h"

/**
 * read_textfile - text read on file and prints to the STDOUT
 * @filename: name of the file chosen to be read
 * @letters: maximum number of letters to be read and printed
 *
 * Return: the actual number of letters it could read and print
 * if filename is NULL return 0
 * if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fld, length, z, outcome;
	char *buffers;

	/*check if the parameter is NULL*/
	if (filename == NULL)
		return (0);

	/*open the file in read only mode*/
	fld = open(filename, O_RDONLY);
	if (fld == -1)
		return (0);

	/*allocate a buffer of size letters*/
	buffers = malloc(sizeof(char) * letters);
	if (buffers == NULL)
		return (0);

	/*read and add a null terminator*/
	read(fld, buffers, letters);
	buffers[letters] = '\0';

	for (z = 0; buffers[z] != '\0'; z++)
		length += 1;

	outcome = close(fld);
	if (outcome != 0)
		exit(-1);

	/*write contents of buffer to STDOUT*/
	outcome = write(STDOUT_FILENO, buffers, length);
	if (outcome != length)
		return (0);

	free(buffers);

	return (length);
}
