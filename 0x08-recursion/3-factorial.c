#include "main.h"
/**
 * factorial - return the factorial of int
 *@n: integer
 *Return: return the factorial of int
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	fact = n * factorial(n - 1);
	return (fact);
}
