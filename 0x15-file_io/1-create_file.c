#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: file in question.
 * @text_content: A container.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)

{
	if (filename == NULL)
	{
		return (-1);
	}

	if (access(filename, F_OK) != -1)
	{

		if (truncate(filename, 0) == -1)
		{
			return (-1);
		}
	}

	int fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t len = strlen(text_content);

		ssize_t num_written = write(fd, text_content, len);

		if (num_written == -1 || (size_t)num_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
