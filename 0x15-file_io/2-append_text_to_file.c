#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: file name containing string to be appended
 * @text_content: pointer to the string appended
 * Return: 1 on success | -1 on failure
 * if filename is NULL return -1 | if text_content is NULL dont add anything
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fld, res, length;

	if (filename == NULL)
		return (-1);
	fld = open(filename, O_WRONLY | O_APPEND);
	if (fld == -1)
		return (-1);

	if (!text_content)
		return (1);

	length = strlen(text_content);

	res = write(fld, text_content, length);
	if (res == -1)
		return (-1);

	res = close(fld);
	if (res == -1)
		return (-1);

	return (1);
}

