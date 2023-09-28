#include "main.h"
/**
 *get_bit - return the bit pointed to by the index
 *@n: decimal
 *@index: index of the bit to return
 *Return: 0 or 1
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int))
		return (-1);
	if (1 & (n >> index))
		return (1);
	else
		return (0);
}
