#include <stdio.h>

/**
 * main - Print 1 to 100, but replace %3 by Fizz and %5 by FizzBuzz
 * Return: 0 Always
 */

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz");
		else if ((i % 3 != 0) && (i % 5 == 0))
			printf("Bizz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	return (0);
}