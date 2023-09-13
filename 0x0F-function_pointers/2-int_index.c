#include "function_pointers.h"
/**
 * int_index - function the manages search for an int
 * @array: int array
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of the element matching or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
