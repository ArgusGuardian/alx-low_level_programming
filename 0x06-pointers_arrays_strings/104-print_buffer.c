#include "main.h"
/**
 * print_segment - print segment
 * @data: pointer to string
 * @segment_start: start of segment
 * @segment_size: segmetn size
 */
void print_segment(char *data, int segment_start, int segment_size)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= segment_start)
			printf("%02x", data[segment_size * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= segment_start; k++)
	{
		if (data[segment_size * 10 + k] > 31 && data[segment_size * 10 + k] < 127)
			putchar(data[segment_size * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @buffer: buffer to print
 * @size: size of buffer
 */
void print_buffer(char *buffer, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_segment(buffer, 9, i);
		}
		else
		{
			print_segment(buffer, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
