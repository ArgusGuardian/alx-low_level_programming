#include "main.h"
/**
 * swap_int - function to swap 2 integers
 * @a: pointer paramter
 * @b: pointer paramter
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
