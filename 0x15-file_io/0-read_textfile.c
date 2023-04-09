#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile- function to read.
 * @filename: name of the file in question
 * @letters: size of letters
 * Return: j- bytes successfully read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;

	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(fd);
	free(buf);
	return (nwr);
}
