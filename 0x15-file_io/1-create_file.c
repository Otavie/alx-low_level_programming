#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Creates a file and write to it
 * @filename: The name of the file to be created.
 * @text_content: The text content of the file
 *
 * Return: 1 => success, -1 => fail (that is both file
 * --write and creation failed)
 */

int create_file(const char *filename, char *text_content)
{
	int file_des, bytes_written = 0;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[bytes_written] != '\0')
			bytes_written++;

		if (write(file_des, text_content, bytes_written) != bytes_written)
		{
			close(file_des);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}
