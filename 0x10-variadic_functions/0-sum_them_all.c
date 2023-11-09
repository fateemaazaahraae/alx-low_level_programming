#include "variadic_functions.h"

/**
 * sum_them_all - sum all argument number
 * @n: the number of argument
 * @...: the integers to sum
 *
 * Return: the result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);
	sum = 0;
	i = n;
	while (i--)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
