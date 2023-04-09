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
	int James_bond;

	int geto;

	int krixx;

	if (!filename)

		return (-1);

	James_bond = open(filename, O_WRONLY | O_APPEND);

	if (James_bond == -1)

		return (-1);

	if (text_content)

	{

		for (geto = 0; text_content[geto]; geto++)

			;

		krixx = write(James_bond, text_content, geto);

		if (krixx == -1)

			return (-1);
	}

	close(James_bond);

	return (1);
}
