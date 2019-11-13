#include "holberton.h"

/**
 * create_file - Function that creates a file and fills it with stuff
 * @filename: Name of the file to be created
 * @text_content: Text to be filled into filename
 * Return: 1 if success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, i = 0, char_printed;

	if (filename == NULL)
		return (-1);

	fp = open(filename, (O_CREAT | O_TRUNC) | O_WRONLY, 0600);

	if (fp == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	char_printed = write(fp, text_content, i);
	close(fp);

	if (char_printed != -1)
		return (1);
	else
		return (-1);
}
