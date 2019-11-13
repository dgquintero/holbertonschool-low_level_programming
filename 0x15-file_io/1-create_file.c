#include "holberton.h"

/**
 * read_textfile - that reads a text file and prints it
 * @filename: pointer to the text file
 * @letters: number of letters it could read and print
 *
 * Return: returns the actual number of letters.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, cl, i;

	if (filename == NULL)
		return(-1);
	fd = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 0600);
	if (fd == -1)
		return(-1);
	if(text_content != NULL)
	{
		for(i = 0; text_content[i] != ('\0'); i++)
			;
		wr = write(fd, text_content, i);
		if(wr == -1)
			return (-1);
	}
	cl = close(fd);
	if(cl == -1)
		return(-1);
	return(1);
}
