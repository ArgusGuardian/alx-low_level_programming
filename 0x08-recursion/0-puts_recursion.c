#include "main.h"
/**
 * _memset - function that fills n bytes
 *@s: pointer to memory
 *@b: character
 *@n: number of bytes to be filled
 * Return: return pointer to the memory
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s++);
}
