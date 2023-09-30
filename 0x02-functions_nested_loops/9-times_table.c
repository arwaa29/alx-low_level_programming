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
		_putchar(48);

		for (y = 1 ; y <= 9 ; y++)
		{
			product = x * y;
			if (product <= 9)
			{
				_putchar(",");
				_putchar(" ");
				_putchar(" ");
				_putchar(product + 48);
			}
			else
			{
				_putchar(",");
				_putchar(" ");
				_putchar(product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
