#include "main.h"

/**
 * f_error - function that checks if files can be opened.
 * @f_from: file_from.
 * @f_to: file_to.
 * @argv: the arguments vector.
 * Return: no return.
 */
void f_error(int f_from, int f_to, char *argv[])
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

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
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, 0664);

	f_error(f_from, f_to, argv);

	while (x == 1024)
	{
		x = read(f_from, buff, 1024);
		if (x == -1)
		{
			f_error(-1, 0, argv);
		}

		wr = write(f_to, buff, x);
		if (wr == -1)
		{
			f_error(0, -1, argv);
		}
	}
	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (0);
}
