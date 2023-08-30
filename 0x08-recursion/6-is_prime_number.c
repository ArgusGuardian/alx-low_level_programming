#include "main.h"
/**
 * is_prime_number - return 1 or 0
 *@n: integer
 *Return: return 1 or 0
 */
int is_prime_number(int n)
{
	int alert;

	if (n == 1 || n <= 0)
		return (0);

	alert = prime(n, 2);
	return (alert);
}
/**
 * prime - return the 1 or 0
 *@n: integer
 *@y: integer
 *Return: return 1 or 0
 */
int prime(int n, int y)
{
	int prm = 0;

	if (n % y == 0)
		return (0);
	if (y > n / 2)
		return (1);

	prm = prime(n, y + 1);
	return (prm);
}
