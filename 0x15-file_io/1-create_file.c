#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - create file
 * @filename: file ptr
 * @text_content: contnt
 *
 * Return: success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, close_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close_status = close(fd);
			if (close_status == -1)
				return (-1);
			return (-1);
		}
	}

	close_status = close(fd);
	if (close_status == -1)
		return (-1);

	return (1);
}
