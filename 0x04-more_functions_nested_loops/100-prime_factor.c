#include <stdio.h>

/**
 * main - Print largest prime factor of 612852475143
 * Return: Always 0
 */

int main(void)
{
	long num = 612852475143;
	long factor = 2;
	while (factor < num)
	{
		if (num % factor == 0)
		{
			num /= factor;
			factor = 2;
		}
		else
			factor++;
	}
	printf("%lu\n", num);
	return (0);
}
