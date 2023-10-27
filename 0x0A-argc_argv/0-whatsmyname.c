#include <stdio.h>

/**
 * main - entry of the program
 * @argc: the number of the command line arguments
 * @argv: command line arguments
 * Return: always 0 (success)
 */

int main(int ac, char *av[])
{
	(void)ac;
	printf("%s\n", av[0]);
	return (0);
}
