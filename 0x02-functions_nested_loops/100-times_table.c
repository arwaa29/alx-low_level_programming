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
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(product + 48);
				}
				else if (product >= 10 && product <= 99)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((product / 10) + 48);
					putchar((product % 10) + 48);
				}
				else
				{
					putchar(',');
					putchar(' ');
					putchar((product / 100) + 48);
					putchar(((product / 10) % 10) + 48);
					putchar((product % 10) + 48);
				}
			}
			putchar('\n');
		}
	}
}
