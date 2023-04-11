#include "main.h"

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff - creates buffer of 1024
 * @file: file for which buffer is created
 *
 * Return: Pointer
 */
char *create_buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes files
 * @fd: file descriptor
 *
 * Return: nothing
 */
void close_file(int fd)
{
	int p;

	p = close(fd);
	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments passed to main
 * @argv: string
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from, read_size, write_size;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	buff = create_buff(argv[2]);

	fd_from = open(argv[1], O_RDONLY);
	read_size = read(fd_from, buff, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || read_size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		write_size = write(fd_to, buff, read_size);
		if (fd_to == -1 || write_size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		read_size = read(fd_from, buff, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_size > 0);

	free(buff);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
