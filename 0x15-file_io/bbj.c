#include "main.h"
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

	bm = open(filename, O_RDONLY);
	if (bm == -1)
		perror(operation error);
	return (0);
	jim = malloc(letters);
	r = read(bm, jim, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(jim);
	close(bm);
	return (w);
}
