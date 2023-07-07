#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - add two integers
 * @argc: size of array
 * @argv: passed array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
