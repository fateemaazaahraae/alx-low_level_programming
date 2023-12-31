#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 *
 * @s: the string
 *
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
