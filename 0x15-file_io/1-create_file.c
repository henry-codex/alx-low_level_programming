#include "main.h"

/**
 * create_file - Creates a file and writes a given text to it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	// Get the length of the text content, if it's not NULL
	if (text_content != NULL)
	{
		for (text_length = 0; text_content[text_length];)
			text_length++;
	}

	// Open the file with write and read permissions and create it if it doesn't exist
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	// Write the text content to the file
	bytes_written = write(file_descriptor, text_content, text_length);

	// Check if there was an error opening or writing to the file
	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

