#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - read file
 * @filename: pointer to file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fl = 0;
	int rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	if (fl == -1)
		return (0);

	fl = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	rd = read(fl, buf, letters);
	if (rd == -1)
		return (0);
	buf[letters] = '\0';

	wr = write(1, buf, rd);
	if (wr == -1)
		return (0);
	close(fl);
	free(buf);
	return (wr);
}
