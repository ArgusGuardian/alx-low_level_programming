#include "3-calc.h"
/**
 * main - pass name to other functions
 * @argc: number of arguments
 * @argv: pointer to arguments
 */
int main(int argc, char *argv[])
{
	int x, y, result;
	int (*op_ptr)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op_ptr = get_op_func(argv[2]);
	if (op_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	op = *argv[2];
	if ((op == '/' || op == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_ptr(x, y);
	printf("%d\n", result);
	return (0);
}
