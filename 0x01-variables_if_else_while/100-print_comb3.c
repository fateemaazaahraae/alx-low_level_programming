#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y;
for (x = 48; x <= 56; x++)
{
for (y = x + 1; y <= 57; y++)
{
if (y > x)
{
putchar(x);
putchar(y);
if (x != 56 || y != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
