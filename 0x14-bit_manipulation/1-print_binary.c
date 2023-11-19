#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @h: the number to print
 *
 * return: void
 */

void print_binary(unsigned long int h)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (h & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
