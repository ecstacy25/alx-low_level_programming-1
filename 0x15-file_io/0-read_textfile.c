#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: filename
 * @letters: number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ch_read, ch_write;
	char *buf;

	if (filename == 0)
		return (0);
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == 0)
		return (free(buff), 0);
	read_open_file = read(open_file, buff, letters);
	if (read_open_file == -1)
	{
		return (free(buff), 0);
	}
	write_file = write(STDOUT_FILENO, buff, read_open_file);
	if (write_file == -1 || read_open_file != write_file)
	{
		return (free(buff), 0);
	}
	free(buff);
	close(open_file);
	return (write_file);
}

