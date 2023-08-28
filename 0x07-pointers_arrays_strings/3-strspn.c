#include "main.h"
/**
 * _strspn - function that compare 2 string
 *@s: pointer to string
 *@accept: accecpted characters
 * Return: return number of charcter accepted
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int accepted = 0, i, j;
	int alert;

	for (i = 0; s[i] != '\0'; i++)
	{
		alert = 0;
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
			{
				accepted++;
				alert = 1;
				break;
			}

		if (alert == 0)
			return (accepted);
	}

	return (accepted);
}