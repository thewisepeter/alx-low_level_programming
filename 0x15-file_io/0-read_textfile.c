#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, n, m;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n = read(fd, buff, letters);
	if (n == -1)
		return (0);

	m = write(1, buff, letters);
	if (m == -1)
		return (0);

	free(buff);
	return (n);
}
