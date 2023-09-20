#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print single digits of base 10, from 0 to 9
 *              using putchar function
 * Return: 0 (success).
*/

int main(void)
{
	int digit;

	while (digit <= 9)
	{
		putchar(digit + 48);
		digit++;
	}
	putchar('\n');

	return (0);
}
