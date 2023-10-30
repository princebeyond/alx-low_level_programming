#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BUF_SIZE 1024
/**
 * close_fd - close
 * @fd: file
 */
void close_fd(int fd);
/**
 * print_error - error
 * @code: code
 * @error_message: ptr massg
 * @arg: argument
 *
 * Return: success
 */
void print_error(const char *error_message, int code, const char *arg);
/**
 * main - main entry
 * @argc: arg
 * @argv: ptr
 *
 * Return: success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buf[BUF_SIZE];
	int mode;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file", 98, argv[1]);
	}
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		print_error("Error: Can't write to", 99, argv[2]);
	}

	while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_error("Error: Can't write to", 99, argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		print_error("Error: Can't read from file", 98, argv[1]);
	}

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
/**
 * close_fd - close file
 * @fd: file to close
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
 * print_error - error
 * @code: code
 * @error_message: ptr massg
 * @arg: argument
 *
 * Return: success
 */
void print_error(const char *error_message, int code, const char *arg)
{
	dprintf(2, "%s %s\n", error_message, arg);
	exit(code);
}
