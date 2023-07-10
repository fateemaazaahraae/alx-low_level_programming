#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, x, j = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			len++;
		}
	}
	len += ac;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			str[j] = av[i][x];
			j++;
		}
		if (str[j] == '\0')
		{
			str[j++] = '\n';
		}
	}
	return (str);
}
