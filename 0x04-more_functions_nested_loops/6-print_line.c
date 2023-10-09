#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *     should be printed
*/

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar ('\n');
	else
	{
		for (line = 0 ; line < n ; line++)
		{
			_putchar ('_');
		}
		_putchar ('\n')
	}

}
