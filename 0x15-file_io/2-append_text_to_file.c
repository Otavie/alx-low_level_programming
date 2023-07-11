#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Te name of the file
 * @text_content: The text content to add at the end of the file
 *
 * Return: 1 => Success and 2 => Fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, bytes_written = 0;

	if (text_content == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);

	while (text_content[bytes_written] != '\0')
		bytes_written++;

	if (write(file_des, text_content, bytes_written) == -1)
	{
		close(file_des);
		return (-1);
	}

	close(file_des);

	return (1);
}
