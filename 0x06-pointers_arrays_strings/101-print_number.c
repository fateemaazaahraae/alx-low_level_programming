#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int l;

	l = n;

	if (n < 0)
	{
		_putchar('-');
		l = -n;
	}

	if (l / 10 != 0)
	{
		print_number(l / 10);
	}
	_putchar((l % 10) + '0');
}

