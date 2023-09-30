#include "main.h"

/**
 * times_table - prints the 9 time table
 *
 * example table
 * 0, 0, 0, 0, ....
 * 0, 1. 2, 3, ....
 * 0, 2, 4, 6, ....
*/

void times_table(void)
{
	int x = 0, y, product;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			product = x * y;
			if (product <= 9)
			{
				putchar(product + 48);
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
			else
			{
				putchar((product / 10) + 48);
				putchar((product % 10) + 48);
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	putchar('\n');
}
