#include "main.h"
/**
 * main - Copy the content of one file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success, non-zero on failure.
 */
int main(int argc, char *argv[])
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	const char *file_from;
	const char *file_to;
	int fd_src;
	int fd_dst;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_src = open(file_from, O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_dst = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_dst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd_src);
		return (99);
	}
	while ((bytes_read = read(fd_src, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_dst, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(fd_src);
			close(fd_dst);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_src);
		close(fd_dst);
		return (98);
	}
	if (close(fd_src) == -1 || close(fd_dst) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		return (100);
	}
	return (0);
}
