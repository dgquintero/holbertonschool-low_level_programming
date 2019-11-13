#include "holberton.h"

/**
 * read_textfile - that reads a text file and prints it
 * @filename: pointer to the text file
 * @letters: number of letters it could read and print
 *
 * Return: returns the actual number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int s;
	char *b;
	ssize_t w = 0, r = 0;

	if (filename == NULL)
		return (0);

	s = open(filename, O_RDONLY);

	if (s == -1)
		return (0);

	b = malloc(sizeof(char) * letters);

	if (b == NULL)
		return (0);
	r = read (s, b, letters);
	if (r == -1)
	{
		free(b);
		return (0);
	}
	w = write(STDOUT_FILENO, b, r);

	if (w == -1)
	{
		free(b);
		return (0);
	}
	close(s);
	free(b);

	return (w);
}
