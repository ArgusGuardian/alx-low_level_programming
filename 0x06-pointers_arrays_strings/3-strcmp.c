#include "main.h"
/**
 * _strncat - ammend string to another string
 * @src: pointer to string
 * @dest: pointer to string
 * @n: number of characters to ammend
 * Return: pointer to string
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
}