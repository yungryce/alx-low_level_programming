#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to file path file
 * @letters: char count
 * Return: number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (!filename)
		return (0);

	o = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	r = read(o, buffer, letters);

	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
