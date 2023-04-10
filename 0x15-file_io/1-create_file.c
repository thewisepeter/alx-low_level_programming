#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: text to be written into file
 *
 * Return: 1 (success) or -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t m;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		len++;

		m = write(fd, text_content, len);
		if (m == -1 || m != len)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		m = write(fd, "", 0);
		if (m == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
