#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number as input
*/

void print_times_table(int n)
{
	int x, y, product;

	if (n >= 0 && n <= 15)
	{
		for (x = 0 ; x <= n ; x++)
		{
			_putchar(48);
			for (y = 1 ; y <= n ; y++)
			{
				product = x * y;

				if (product <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + 48);
				}
				else if (product >= 10 && product <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + 48);
					_putchar((product % 10) + 48);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + 48);
					_putchar(((product / 10) % 10) + 48);
					_putchar((product % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
