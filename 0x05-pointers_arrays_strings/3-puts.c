#include "main.h"

/**
 * _puts - function that prints a string, followed by new line.
 *
 * @str: string input parameter.
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
