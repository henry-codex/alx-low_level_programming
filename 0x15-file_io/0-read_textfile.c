#include "main.h"

/**
 * create_file - Creates a file and writes a given text content to it.
 *
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: On success, 1.
 *         On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		text_len = get_text_len(text_content);
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, text_len);

	if (bytes_written == -1 || bytes_written != text_len)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}

/**
 * get_text_len - Calculates the length of a given string.
 *
 * @text: A pointer to a string.
 *
 * Return: The length of the string.
 */
int get_text_len(char *text)
{
	int len = 0;

	while (text[len] != '\0')
	{
		len++;
	}

	return (len);
}

