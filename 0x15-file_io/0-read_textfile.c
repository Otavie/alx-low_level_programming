#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed
 * --0 if the file cannot be read or opened or if filename is NULL
 * --or if write fails or does not write the xpected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(file_des);
		return (0);
	}
	bytes_read = read(file_des, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_des);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_des);
		return (0);
	}
	free(buffer);
	close(file_des);
	return (bytes_written);
}
