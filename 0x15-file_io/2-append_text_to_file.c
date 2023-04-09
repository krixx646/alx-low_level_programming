#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int bass, zag, ok;

	if (filename == NULL)
	{
		perror("write");
		return (-1);
	}

	if (access(filename, F_OK) != 0)
	{
		perror("write");
		return (-1);
	}

	bass = open(filename, O_WRONLY | O_APPEND);
	if (bass == -1)
	{
		perror("write");
		return (-1);
	}

	ok = strlen(text_content);

	if ((text_content == NULL) || (access(filename, W_OK) != 0))
	{
		zag = write(bass, text_content, ok);
		if (zag == -1)
		{
			perror("write");
			close(bass);
			return (-1);
		}
	}
	else
	{
		close(bass);
		return (1);
	}

	close(bass);
	return (0);
}
