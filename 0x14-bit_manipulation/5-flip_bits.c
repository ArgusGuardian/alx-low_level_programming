#include "main.h"
/**
 *clear_bit - convert a bit to 0
 *@n: decimal
 *@index: index of the bit to return
 *Return: -1 or 1
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned int count = 0;

	while (i < sizeof(unsigned long int) * 8)
	{
		if (((n >> i) ^ (m >> i)) & 1)
			count++;
		i++;
	}
	return (count);
}
