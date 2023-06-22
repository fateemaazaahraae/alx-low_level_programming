#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
long int m;
long int max;
long int x;
m = 612852475143;
max = -1;
while (m % 2 == 0)
{
max = 2;
m /= 2;
}
for (x = 3; x <= sqrt(m); x = x + 2)
{
while (m % x == 0)
{
max = x;
m = m / x;
}
}
if (m > 2)
max = m;
printf("%ld\n", max);
return (0);
}
