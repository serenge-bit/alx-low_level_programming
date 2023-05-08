#include "main.h"
#include <string.h>

/**
 * create_file - creates a  new file
 * @filename: names the file to create
 * @text_content: pointer to the string we want to write
 *
 * Return: 1 on success | -1 0n failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file and give rw-------
 */

int create_file(const char *filename, char *text_content)
{
	int fld, res, length;

	if (filename == NULL)
		return (-1);

	fld = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fld == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	length = strlen(text_content);

	res = write(fld, text_content, length);
	if (res != length)
		return (-1);

	res = close(fld);

	return (1);
}
