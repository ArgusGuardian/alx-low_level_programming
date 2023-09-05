#include "main.h"
/**
 * countWords - Helper function to count the number of words in a string.
 * @s: The string to evaluate.
 *
 * Return: The number of words.
 */
int countWords(char *s)
{
	int alert = 0, counter = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			alert = 0;
		else if (alert == 0)
		{
			alert = 1;
			counter++;
		}
	}
	return (counter);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (Success) or NULL (Error).
 */
char **strtow(char *str)
{
	char **words, *tmp;
	int i, k = 0, len = 0, num_words, alert = 0, first, last;

	while (*(str + len))
		len++;
	num_words = countWords(str);
	if (num_words == 0)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (alert)
			{
				last = i;
				tmp = (char *)malloc(sizeof(char) * (alert + 1));
				if (tmp == NULL)
					return (NULL);

				while (first < last)
					*tmp++ = str[first++];
				*tmp = '\0';
				words[k] = tmp - alert;
				k++;
				alert = 0;
			}
		}
		else if (alert++ == 0)
			first = i;
	}
	words[k] = NULL;
	return (words);
}
