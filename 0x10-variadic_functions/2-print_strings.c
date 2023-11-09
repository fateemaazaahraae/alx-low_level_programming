#include "variadic_functions.h"

/**
 * print_strings - printing strings
 * @separator: the string to be printed between the strings
 * @n: number of strings to be printed
 * @...: strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if ((i != n - 1) && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
