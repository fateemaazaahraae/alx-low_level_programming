#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[100];
	int i, sum, x;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		arr[i] = rand() % 78;
		sum += (arr[i] + '0');
		putchar(arr[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			x = 2772 - sum - '0';
			sum += x;
			putchar(x + '0');
			break;
		}
	}

	return (0);
}
