#include "main.h"
/**
 * puts_half - print half of the string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int len = 0, i = 0, n;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	len--;

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		i = len / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
