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

	int James_bond;

	ssize_t occulus, krixx;
	char *get;

	if (!filename)
		return (0);
	James_bond = open(filename, O_RDONLY);
	if (James_bond == -1)
		return (0);
	get = malloc(sizeof(char) * (letters));
	if (!get)
		return (0);
	occulus = read(James_bond, get, letters);
	krixx = write(STDOUT_FILENO, get, occulus);
	close(James_bond);
	free(get);
	return (krixx);
}
