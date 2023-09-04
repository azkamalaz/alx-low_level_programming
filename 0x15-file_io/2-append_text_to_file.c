#include "main.h"
/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file to which text will be appended.
 * @text_content: The text content to be appended to the file.
 * Return: On success, returns 1. On failure or error, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int result;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	file = open(filename, O_RDWR | O_APPEND, 0666);
	if (file == -1)
	{
		return (-1);
	}

	result = dprintf(file, "%s", text_content);
	if (result < 0)
	{
		close(file);
		return (-1);
	}

	close(file);

	return (1);
}
