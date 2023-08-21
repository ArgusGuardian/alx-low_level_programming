#include "main.h"
/**
 * puts2 - print every other character
 * @str: pointer to a string
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
}
