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
	int len;

	len = length(s);
	alert = palindome(s, str + len - 1, len);
	return (alert);
}
/**
 * palindome - check if string is palindrome
 *@s: string
 *@str: string
 *@len: lenght
 *Return: return 1 or 0
 */
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
/**
 * length - calculates the lenght of string
 *@s: string
 *Return: return lenght
 */
int length(char *s)
{
	int len = 0;

	if (*s != '\0')
		len = len + 1 + length(s + 1);
	return (len);
}
