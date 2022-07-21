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
	int wr;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[len])
		len++;
	wr = write(fl, text_content, len);
	if (wr == -1)
		return (-1);
	close(fl);
	return (1);
}
