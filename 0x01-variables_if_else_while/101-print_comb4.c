#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y, z;
for (x = 48; x <= 55; x++)
{
for (y = x + 1; y <= 56; y++)
{
for (z = y + 1; z <= 57; z++)
{
if (y > x && z > y)
{
putchar(x);
putchar(y);
putchar(z);
if (x != 55 || y != 56 || z != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
