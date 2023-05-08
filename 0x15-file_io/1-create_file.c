#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - creates a file with the given filename and writes the
 * contents of text_content to it
 * @filename:name of the file to create
 * @text_content:null-terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_len = 0;

	if (!filename)
	return (-1);

	if (text_content)
{
	while (*(text_content + text_len))
	text_len++;
}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	return (-1);

	if (text_content)
{
	bytes_written = write(fd, text_content, text_len);
	if (bytes_written != text_len)
{
	close(fd);
	return (-1);
}
}

	close(fd);
	return (1);
}
