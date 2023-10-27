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
	int sum;
	int i;
	int j;

	sum = 0;
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(av[i]);
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
