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
		putchar(48);

		for (y = 0 ; y <= 9 ; y++)
		{
			product = x * y;
			if (product <= 9)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(product + 48);
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar((product / 10) + 48);
				putchar((product % 10) + 48);
			}
		}
		putchar('\n');
	}
	putchar('\n');
}
