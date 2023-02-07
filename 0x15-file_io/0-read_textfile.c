#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read text file
 * @filename: file name
 * @letters: size of letters
 * description : "read and print file and return letters"
 * Return: no of letters or 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o);
	return (w);
}
