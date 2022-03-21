#include "main.h"

/**
 * print_rev - Print a string in reverse order followed by new line
 * @s: the string
 */

void print_rev(char *s)
{
	int length, i;

	for (length = 0; *s != '\0'; length++)
		s++;
    s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}