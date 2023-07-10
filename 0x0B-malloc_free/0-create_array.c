#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
		return (ptr);
	}
}
