#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it
 *
 * @filename: pointer to the file
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int file, size;

	if (!filename)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (!buff)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	size = read(file, buff, letters);

	write(STDOUT_FILENO, buff, size);

	close(file);
	free(buff);
	return (size);
}
