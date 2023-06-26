#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int l = 0;
	int x;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (x = l; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
