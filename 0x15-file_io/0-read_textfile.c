#include "holberton.h"

/**
 * read_textfile - Function that reads and prints the contents of a file
 * @filename: Name of file to open
 * @letters: Number of characters to read and print
 * Return: The number of characters actually read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buf = NULL;
	size_t i;
	int test;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	i = read(fp, buf, letters);
	if (i > letters)
	{
		free(buf);
		return (0);
	}

	test = write(STDOUT_FILENO, buf, letters);

	if (test == -1)
	{
		free(buf);
		return (0);
	}

	close(fp);
	free(buf);

	return (i);
}
