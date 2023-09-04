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
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NUL)
	{
		return (1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}

	result = fprintf(file, "%s", text_content);
	fclose(file);

	return ((result < 0) ? -1 : 1);
}
