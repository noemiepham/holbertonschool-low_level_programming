#include "main.h"
/**
 * create_file - creat new file
 * @filename : name of new file
 * @text_content: text inside new file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fl;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_CREAT | O_TRUNC | O_RDONLY, 0600);
	if (fl == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fl);
		return (-1);
	}
	while (text_content[len])
	{
		len++;
	}

	write(fl, text_content, len);
	close(fl);
	return (1);
}