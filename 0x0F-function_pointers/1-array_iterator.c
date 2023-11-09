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
	int i;

	if (array == NULL || action  == NULL)
		return;
	for (i = 0; size > 0; i++)
	{
		action(*array);
		array++;
		size--;
	}
}
