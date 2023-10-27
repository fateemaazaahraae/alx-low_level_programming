#include <stdio.h>

/**
 * main - entry of the program
 * @ac: number of command line arguments
 * @av: command line arguments
 * Return: always 0 (success)
 */

int main(int ac, char *av[])
{
	(void)av;
	printf("%i\n", ac - 1);
	return (0);
}
