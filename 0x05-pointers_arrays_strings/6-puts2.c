#include "main.h"
/**
 * puts2 - print every other
 * @str: pointer to a string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
