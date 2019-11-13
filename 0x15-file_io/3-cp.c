#include "holberton.h"
#include <stdio.h>
/**
 * errmsg - function thatt creates a file
 * @ex: exit code
 * @ms: error message
 * @file: name of a file
 * Return: Nothing.
 */

void errmsg(int ex, const char *ms, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", ms, file);
	exit(ex);
}

/**
 * main - function that copy a file into a nother file
 * @argc: argument count
 * @argv: arguments variable
 *
 * Return: an integer
 */
int main(int argc, char **argv)
{
	int fdfrom, fdto, rd, wr, clofrom, cloto;
	char b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdfrom = open(argv[1], O_RDONLY);

	if (fdfrom == -1)
		errmsg(98, "Error: Can't read from file", argv[1]);

	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fdto == -1)
		errmsg(99, "Error: Can't write to", argv[2]);

	do {
		rd = read(fdfrom, b, 1024);
		wr = write(fdto, b, rd);
	} while (rd == 1024);

	if (rd == -1)
		errmsg(98, "Error: Can't close fd", argv[1]);

	if (wr == -1)
		errmsg(99, "Error: Can't write to", argv[2]);

	clofrom = close(fdfrom);

	if (clofrom == -1)
		errmsg(100, "Error: Can't close fd", argv[1]);

	cloto = close(fdto);

	if (cloto == -1)
		errmsg(100, "Error: Can't close fd", argv[2]);

	return (0);
}
