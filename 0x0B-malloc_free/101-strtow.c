#include "main.h"
int words_counter(char *str);
int *character_counter(char *str, int num_words);
char **initialize(char **words, char *str);
/**
 * strtow - string to words
 *@str: original string
 *Return: return array of pointer to words
 *
 */
char **strtow(char *str)
{
	char **words;
	int num_words, i, k = 0, j = 0;
	int *num_characters;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = words_counter(str);
	if (num_words == 0)
		return (NULL);
	words = (char **)malloc(num_words + 1);
	if (words == NULL)
		return (NULL);
	words[num_words] = NULL;

	num_characters = character_counter(str, num_words);

	for (i = 0; i < num_words; i++)
	{
		*(words + i) = (char *)malloc(num_characters[k]);
		if (*(words + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(words + j));
			free(words);
			return (NULL);
		}
		k++;
	}
	words = initialize(words, str);
	free(num_characters);
	return (words);
}
/**
 * words_counter - count number of words
 *@str: original string
 *Return: number of words
 *
 */
int words_counter(char *str)
{
	int i = 0, count = 0, alert = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			alert = 0;
		else if (alert == 0)
		{
			count++;
			alert = 0;
		}
		i++;
	}
	return (count);
}
/**
 * character_counter - count number of characters
 *@str: original string
 *@num_words: number of words
 *Return: number of characters
 *
 */
int *character_counter(char *str, int num_words)
{
	int char_counter, i = 0, alert = 0, k = 0;
	int *counter;

	counter = (int *)malloc(num_words + 1);
	if (counter == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		char_counter = 1;
		while (str[i] != ' ' && str[i] != '\0')
		{
			char_counter++;
			alert = 1;
			i++;
		}
		if (alert == 1)
		{
			counter[k] = char_counter;
			alert = 0;
			k++;
			continue;
		}
		i++;
	}
	return (counter);
}
/**
 * initialize - initialize every word
 *@words: array of pointer to words
 *@str: original string
 *Return: pointer to pointers to words
 *
 */
char **initialize(char **words, char *str)
{
	int i = 0, j = 0, k, alert = 0;

	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			words[j][k] = str[i];
			k++;
			i++;
			alert = 1;
		}
		if (alert == 1)
		{
			alert = 0;
			words[j][k] = '\0';
			continue;
		}
		i++;
	}
	return (words);
}

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
