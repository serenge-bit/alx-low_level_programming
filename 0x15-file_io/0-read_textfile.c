#include "main.h"

/**
 * read_textfile - texts file are read and prints to the STDOUT
 * @filename: name of the file to read
 * @letters: maximum number of letters to be read and printed
 *
 * Return: actual number of letters to be read
 * if filename is NULL return 0
 * fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, length, a, results;
	char *buffer;

	/*check if the parameter is NULL*/
	if (filename == NULL)
		return (0);

	/*open the file in read only mode*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*allocate a buffer of size letters*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*read and add a null terminator*/
	read(fd, buffer, letters);
	buffer[letters] = '\0';

	for (a = 0; buffer[a] != '\0'; a++)
		length += 1;

	results = close(fd);
	if (results != 0)
		exit(-1);

	/*write contents of buffer to STDOUT*/
	results = write(STDOUT_FILENO, buffer, length);
	if (results != length)
		return (0);

	free(buffer);

	return (length);
}
