#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char character;
for (character = 'a'; character <= 'z'; character++)
{
if (character != 'e' && character != 'q')
putchar(character);
}
putchar('\n');
return (0);
}
