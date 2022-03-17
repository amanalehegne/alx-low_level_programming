#include "main.h"

/**
 * print_triangle - Create a triagle of #
 * @size: Size of the triangle
 */

void print_triangle(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
			putchar(' ');
		for (int j = 0; j < i + 1; j++)
			putchar('#');
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}