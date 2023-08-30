#include "main.h"
/**
 * _pow_recursion - return the power of x to y
 *@x: integer
 *@y: integer
 *Return: return the power of x to y
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	pow = x * _pow_recursion(x, y - 1);

	return (pow);
}
