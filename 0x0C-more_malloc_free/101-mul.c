#include "main.h"
/**
 * is_valid_number - check if string is number
 * @s: string to be evaluated
 * Return: 1 if it's a valid number, 0 otherwise
 */
int is_valid_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * string_length - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * handle_errors - handles errors for the main function
 */
void handle_errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two very big numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, carry, digit1, digit2, *result, flag = 0;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !is_valid_number(num1) || !is_valid_number(num2))
		handle_errors();
	len1 = string_length(num1);
	len2 = string_length(num2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = num1[len1] - '0';
		carry = 0;
		for (len2 = string_length(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			flag = 1;
		if (flag)
			putchar(result[i] + '0');
	}
	if (!flag)
		putchar('0');
	putchar('\n');
	free(result);
	return (0);
}
