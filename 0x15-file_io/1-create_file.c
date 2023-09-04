#include "main.h"
/**
 * create_file - Create a new file or overwrite an existing file.
 * @filename: The name of the file to be created or overwritten.
 * @text_content: content to written to file. Pass NULL to create empty file.
 * Return:
 *   -  1: The file was successfully created and written.
 *   - -1: An error occurred, and the file could not be created or written.
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	file = fdopen(fd, "w");
	if (file == NULL)
	{
		close(fd);

		return (-1);
	}

	if (text_content != NULL)
	{
		size_t bytesWritten = fwrite(text_content, 1, strlen(text_content), file);

		if (bytesWritten < strlen(text_content) || ferror(file))
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);
	return (1);
}
