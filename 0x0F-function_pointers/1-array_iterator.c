#include "function_pointers.h"
/**
 * array_iterator - call a function with array arguments
 * @array: int array
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size == 0 || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
