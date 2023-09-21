#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combination of two two digits from 0 to 99
 *              combination of numbers must be separated by (,)
 *              using putchar function.
 * Return: always 0 (success).
*/

int main(void)
{
	int first_digit = 0, second_digit;

	while (first_digit <= 99)
	{
		second_digit = first_digit;
		while (second_digit <= 99)
		{
			if (second_digit != first_digit)
			{
				putchar((first_digit / 10) + 48);
				putchar((first_digit % 10) + 48);
				putchar(' ');
				putchar((second_digit / 10) + 48);
				putchar((second_digit % 10) + 48);

				if (first_digit != 98 ||  second_digit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}

