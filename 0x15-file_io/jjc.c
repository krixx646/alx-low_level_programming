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
	char *jim;
	ssize_t bm;
	ssize_t w;
	ssize_t r;

	if (filename == NULL)
		return (0);

	bm = open(filename, O_RDONLY);
	if (bm == -1)
	{
		perror("read_textfile");
		return (0);
	}

	jim = malloc(letters);
	if (jim == NULL)
	{
		close(bm);
		return (0);
	}

	r = read(bm, jim, letters);
	if (r == -1)
	{
		perror("read_textfile");
		free(jim);
		close(bm);
		return (0);
	}

	w = write(STDOUT_FILENO, jim, r);
	if (w == -1)
	{
		perror("read_textfile");
		free(jim);
		close(bm);
		return (0);
	}

	free(jim);
	close(bm);
	return (w);
}
