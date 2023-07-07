#include "main.h"
#include<stdio.h>
/**
 * main - print all argument
 * @argc: size of array
 * @argv: array passed
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
