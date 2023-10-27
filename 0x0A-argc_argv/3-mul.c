#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry of the program
 * @ac: number of command line arguments
 * @av: command line arguments
 * Return: always 0 (success)
 */

int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int result;

		result = atoi(av[1]) * atoi(av[2]);
		printf("%i\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
