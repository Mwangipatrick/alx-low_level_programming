#include "main.h"
/**
 * read_textfile - a function that reads a text file and print output
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesR, bytesW;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesR = read(fd, buffer, letters);
	bytesW = write(STDOUT_FILENO, buffer, bytesR);

	free(buffer);
	close(fd);

	return (bytes);
}
