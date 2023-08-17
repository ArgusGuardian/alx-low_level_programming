#include "main.h"

/**
 * main - print the highest prime factor
 * Return: always 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long n = 612852475143;

	for (i = 3; i < sqrt(n); i += 2)
	{
		while ((n % i == 0) && (n != i))
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
