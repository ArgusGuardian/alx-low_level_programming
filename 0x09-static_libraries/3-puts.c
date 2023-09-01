#include "main.h"
/**
 * _puts - function to write string
 * @str: pointer to a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
