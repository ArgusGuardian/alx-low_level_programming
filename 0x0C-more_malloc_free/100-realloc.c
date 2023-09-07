#include "main.h"
/**
 * _realloc - functinon allocates memory
 *@ptr: pointer
 *@old_size: old size
 *@new_size: new size
 * Return: pointer
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = (void *)malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		new_ptr = (void *)malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)new_ptr + i) = *((char *)ptr + i);
		free(ptr);
		return (new_ptr);
	}
	return (NULL);
}
