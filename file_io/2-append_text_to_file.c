#include "main.h"
/**
 * append_text_to_file - add text tp file
 * @filename: name of file to be create
 * @text_content: text to add in file
 * Return: 1 is success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fptr;
	int wr;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fptr = open(filename, O_WRONLY | O_APPEND);

	if (fptr == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
		len++;
		wr = write(fptr, text_content, len);
		if (wr == -1)
			return (-1);
	}

	close(fptr);
	return (1);
}
