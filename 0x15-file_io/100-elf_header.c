#include "main.h"
/**
 * create_buffer - Allocates a buffer for file operations.
 * @file: The name of the file for error messages.
 * Return: A pointer to the allocated buffer.
 */
char *create_buffer2(const char *file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Can't allocate memory for %s\n", file);
		exit(EXIT_FAILURE);
	}

	return (buffer);
}
/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		fprintf(stderr, "Error: Can't close file descriptor %d\n", fd);
		exit(EXIT_FAILURE);
	}
}
/**
 * main - Copies the contents of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, exit codes for various error conditions.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(EXIT_FAILURE);
	}
	buffer = create_buffer2(argv[2]);
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(EXIT_FAILURE);
	}
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		fprintf(stderr, "Error: Can't create or write to %s\n", argv[2]);
		free(buffer);
		close_file(src_fd);
		exit(EXIT_FAILURE);
	}
	while ((bytes_read = read(src_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close_file(src_fd);
			close_file(dest_fd);
			exit(EXIT_FAILURE);
		}
	}
	free(buffer);
	close_file(src_fd);
	close_file(dest_fd);
	return (0);
}
