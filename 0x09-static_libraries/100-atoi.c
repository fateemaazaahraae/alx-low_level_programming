#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, x, n, lenght, a, digit;

	i = 0;
	x = 0;
	n = 0;
	lenght = 0;
	a = 0;
	digit = 0;

	while (s[lenght] != '\0')
		lenght++;

	while (i < lenght && a == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (x % 2)
				digit = -digit;
			n = n * 10 + digit;
			a = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			a = 0;
		}
		i++;
	}
	if (a == 0)
		return (0);

	return (n);
}
