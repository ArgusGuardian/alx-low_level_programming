#include "main.h"
/**
 * main - Entry point
 * Description: prints _putchar
 * Return: always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int A;

	for (A = 0; A < 8; A++)
		_putchar(str[A]);
	_putchar('\n');

	return (0);
}