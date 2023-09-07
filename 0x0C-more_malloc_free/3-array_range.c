#include "main.h"
/**
 * array_range - functinon allocates memory
 *@min: min number
 *@max: max number
 * Return: pointer
 *
 */
int *array_range(int min, int max)
{
	int *array;
	int diff, i;

	diff = max - min + 1;
	if (diff <= 0)
		return (NULL);

	array = (int *)malloc(diff * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < diff; i++, min++)
	{
		array[i] = min;
	}

	return (array);
}
