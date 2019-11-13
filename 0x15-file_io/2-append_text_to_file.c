#include "holberton.h"

/**
 * append_text_to_file - Function that adds text to an existing file,
 * if it is possible to append to the file
 * @filename: The file to be appended
 * @text_content: The string to append to filename
 * Return: 1 if append success or if append fails but file already exists
 * Return -1 if neither happens
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, count = 0, char_printed;
	char *buf = NULL;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_APPEND | O_WRONLY);
	if (fp == -1)
		return (-1);

	if (text_content == NULL && filename)
		return (1);
	else if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
		return (-1);

	buf = malloc(sizeof(char) * count);
	if (buf == NULL)
		return (-1);

	read(fp, buf, count);
	char_printed = write(fp, text_content, count);
	if (char_printed == -1)
		return (-1);

	close(fp);
	free(buf);

	return (1);
}
