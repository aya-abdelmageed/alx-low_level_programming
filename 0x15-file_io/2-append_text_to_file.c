#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: pointer to file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;

	if (!filename)
		return (-1);

	file = open(filename, O_WONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;

	write(file, text_content, i);
	close(file);
	return (1);
}
