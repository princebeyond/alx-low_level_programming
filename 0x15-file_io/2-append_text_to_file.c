#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - append file
 * @filename: file ptr
 * @text_content: contnt
 *
 * Return: success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
