#include <stdio.h>
#include "main.h"
/**
 * create_file - create file
 * @filename: name of the file
 * @text_content: text content of the file
 * description : "create file and if exists don't change the per"
 * Return: 1 on success and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	len = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
