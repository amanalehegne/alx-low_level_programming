#include "main.h"

/**
 * _puts - Print a string with a new line
 * @str: the string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
