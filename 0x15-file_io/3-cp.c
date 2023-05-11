#include "main.h"

/**
 * main - copy the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int f_from, f_to, wr;
	ssize_t x = 1024;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (x == 1024)
	{
		x = read(f_from, buff, 1024);
		if (x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		wr = write(f_to, buff, x);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }}
	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100); }
	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100); }
	return (0);
}
