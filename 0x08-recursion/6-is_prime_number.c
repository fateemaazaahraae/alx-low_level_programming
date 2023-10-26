#include "main.h"

int primenum(int n, int i);

/**
 * is_prime_number - check if the number is prime or not
 *
 * @n: the number para
 *
 * Return: 1 if the number is prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenum(n, n - 1));
}

/**
 * primenum - check number is prime or not
 *
 * @n: number para
 * @i: number para
 *
 * Return: 1 or 0
 */

int primenum(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (primenum(n, i - 1));
}
