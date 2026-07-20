#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

void close_fd(int fd);
int open_from(char *file_from);
int open_to(char *file_to);
void copy_content(int fd_from, int fd_to, char *file_from, char *file_to);

/**
 * close_fd - closes a file descriptor, exits with 100 on failure
 * @fd: the file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_from - opens the source file for reading
 * @file_from: the name of the source file
 *
 * Return: the file descriptor
 */
int open_from(char *file_from)
{
	int fd_from;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	return (fd_from);
}

/**
 * open_to - opens (creates/truncates) the destination file for writing
 * @file_to: the name of the destination file
 *
 * Return: the file descriptor
 */
int open_to(char *file_to)
{
	int fd_to;

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (fd_to);
}

/**
 * copy_content - copies content from one fd to another, 1024 bytes at a time
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: name of the source file (for error messages)
 * @file_to: name of the destination file (for error messages)
 */
void copy_content(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char buf[BUF_SIZE];
	ssize_t r, w;

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w == -1 || w != r)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, exits with 97, 98, 99 or 100 on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_from(av[1]);
	fd_to = open_to(av[2]);

	copy_content(fd_from, fd_to, av[1], av[2]);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
