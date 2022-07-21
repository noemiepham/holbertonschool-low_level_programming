#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * error_file - check file fail
 * @file_to: destination
 * @file_from: source
 * @argv: argument vector
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		/*stderr_fileno = 2*/
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check code
 * @argc: number of argument
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int src, dest, err_close;
	int len, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	/*TRUNC = cause the files to be truncated if it exists */
	error_file(src, dest, argv);

	len = 1024;
	while (len == 1024)
	{
		len = read(src, buf, 1024);
		if (len == -1)
			error_file(-1, 0, argv);
		nwr = write(dest, buf, len);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(src);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
		/*dprintf = print to file descriptor*/
	}
	err_close = close(dest);
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
		/*dprintf = print to file descriptor*/
	}
	return (0);
}
