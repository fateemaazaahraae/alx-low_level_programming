#include "variadic_functions.h"

/**
 * print_numbers - print numbers separated by a separator
 * @separator: the separator
 * @n: numberof argument
 * @...: the other argument
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	i = 0;
	while (i < n)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if ((i < n - 1) && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
