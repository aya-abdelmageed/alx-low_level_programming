#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguments num
 * @av: arguments
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int size = 0, i, j, c = 0;
	char *ans;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	ans = malloc(size * sizeof(char));
	if (ans == NULL)
	{
		free(ans);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ans[c] = av[i][j];
			c++;
		}
		ans[c] = '\n';
		c++;
	}
	ans[c] = '\0';
	return (ans);
}
