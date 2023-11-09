#include "function_pointers.h"

/**
 * print_name - function to print name
 * @f: function that will print
 * @name: the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
