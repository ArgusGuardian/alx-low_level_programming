#include "main.h"
/**
 * is_palindrome - check if string is palindrome
 *@s: string
 *Return: return 1 or 0
 */
int is_palindrome(char *s)
{
	char *str = s;
	int alert;
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	str--;
	alert = palindome(s, str, len);
	return (alert);
}
int palindome(char *s, char *str, int len)
{
	int alert;

	if (*s != *str)
		return (0);
	if (len == 0)
		return (1);

	alert = palindome(s + 1, str - 1, len - 1);
	return (alert);
}
