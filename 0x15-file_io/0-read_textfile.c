#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: The name of the file to read
 * @letters:number of letters to read and print
 * Return: The actual number of letters it could read and print, or 0 if it
 *fails to open or read the file, if filename is NULL, or if write
 *fails to write the expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	close(fd);
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);

	if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
		return (0);

	return (bytes_written);
}
