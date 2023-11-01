#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating array
 * @size: size of array
 * @c: what would be inside array
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
