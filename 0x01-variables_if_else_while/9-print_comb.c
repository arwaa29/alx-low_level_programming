#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combination of single digit numbers,
 *              separated by ,  using putchar function
 * Return: 0 (success).
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}

