#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	len--;
	while (len > i)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
		len--;
	}
}
