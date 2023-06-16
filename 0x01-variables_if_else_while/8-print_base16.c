#include<stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
char chr;
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + '0');
}
for (chr = 'a'; chr <= 'f'; chr++)
{
putchar(chr);
}
putchar('\n');
return (0);
}
