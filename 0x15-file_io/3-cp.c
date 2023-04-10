#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		perror("Error: Can't allocate memory");
		exit(EXIT_FAILURE);
	}
	return (buffer);
}

/**
 * close_files - Closes file descriptors.
 *
 * @fd1: The file descriptor of the first file to be closed.
 * @fd2: The file descriptor of the second file to be closed.
 *
 * Return: void
 */
void close_files(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
	perror("Error: Can't close the first file");
		exit(EXIT_FAILURE);
	}
	if (close(fd2) == -1)
	{
		perror("Error: Can't close the second file");
		exit(EXIT_FAILURE);
	}
}

/**
 * main - Copies the contents of a file to another file.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, n_read, n_write;
	char *buffer;

/* Check for correct argument count */
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

/* Allocate memory for buffer */
	buffer = create_buffer();

/* Open the source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		perror("Error: Can't read from the source file");
		free(buffer);
		exit(98);
	}

/* Open the destination file for writing */
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	perror("Error: Can't write to the destination file");
		free(buffer);
		close_files(fd_from, fd_to);
	exit(99);
	}

	/* Read from the source file and write to the destination file */
	while ((n_read = read(fd_from, buffer, 1024)) > 0)
	{
	n_write = write(fd_to, buffer, n_read);
	if (n_write == -1)
		{
		perror("Error: Can't write to the destination file");
		free(buffer);
		close_files(fd_from, fd_to);
		exit(99);
		}
	}
/* Check for read error */
	if (n_read == -1)
	{
		perror("Error: Can't read from the source file");
		free(buffer);
		close_files(fd_from, fd_to);
		exit(98);
	}

	/* Close the files and free the buffer */
	free(buffer);
	close_files(fd_from, fd_to);

	return (0);
}

