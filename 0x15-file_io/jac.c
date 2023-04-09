#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, n;
    size_t len = strlen(text_content);

    if (filename == NULL)
    {
        fprintf(stderr, "filename is NULL\n");
        return (-1);
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
    {
        perror("open");
        return (-1);
    }

    n = write(fd, text_content, len);
    if (n == -1)
    {
        perror("write");
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);
}

