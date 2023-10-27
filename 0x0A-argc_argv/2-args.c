#include <stdio.h>

/**
 * main - entry of the program
 * @ac: number of command line arguments
 * @av: command line arguments
 * Return: always 0 (success)
 */

int main(int ac, char *av[])
{
	int i;

	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
