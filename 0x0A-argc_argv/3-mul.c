#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiple two integers
 * @argc: size of array
 * @argv: passed array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
