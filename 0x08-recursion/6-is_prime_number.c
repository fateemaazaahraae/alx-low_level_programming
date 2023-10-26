#include "main.h"

int primenum(int num);

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
	return (primenum(n));
}

/**
 * primenum - check number is prime or not
 *
 * @num: number para
 *
 * Return: 1 or 0
 */

int primenum(int num)
{
	int i;

	i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}
