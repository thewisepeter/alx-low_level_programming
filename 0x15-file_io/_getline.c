#include "main.h"

size_t _getline(char **file_1, size_t *n)
{
	char *buff;
	size_t r, w;
	int fd;

	buff = malloc(sizeof(char) * n);
	if (!buff)
		return (0);

	fd = open(file_1, O_CREATE | O_RDWR);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	r = read(STDIN_FILENO, buff, n);
	if (r == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[r] = '\0';

	w = write(fd, buff, n);
	
	if (w == -1 || w != r)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (r);
}
