#include "function_pointers.h"

/**
 * array_iterator - iterate through a given array set
 * @array: target array
 * @size: array size
 * @action: function pointer to array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action  == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
