#include <stdio.h>
#include <stdlib.h>
/**
 * print_op - prints the opcodes of the given function
 * @func_ptr: pointer to the function
 * @num_op: number of opcodes to print
 */
void print_op(void (*func_ptr)(void), int num_op)
{
	unsigned char *opcodes = (unsigned char *)func_ptr;

	for (int i = 0; i < num_op; i++)
	{
		printf("%02x", *opcodes);
		if (i != num_op - 1)
			printf(" ");
		opcodes++;
	}

	printf("\n");
}
/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: arguments
 * Return: return 0 on success
 */
int main(int argc, char *argv[])
{
	int num_op;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_op = atoi(argv[1]);

	if (num_op < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_op((void *)&main, num_op);

	return (0);
}
