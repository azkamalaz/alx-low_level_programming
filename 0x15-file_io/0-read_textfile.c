#include "main.h"
/**
 * read_textfile - Reads a text file and prints its content to stdout.
 * @filename: The path to the text file to be read.
 * @letters: The maximum number of characters to read and print.
 * Return: The number of characters successfully read and printed, or 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	FILE *file;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, 1, letters, file);
	if (bytesRead < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';
	bytesWritten = fwrite(buffer, 1, bytesRead, stdout);
	if (bytesWritten < bytesRead)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (bytesWritten);
}
