#include"main.h"
#include<stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *copy;
	int x, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
	{
		return (NULL);
	}

	x = 0;
	while (str[x] != '\0')
	{
		copy[x] = str[x];
		x++;
	}
	return (copy);
}
