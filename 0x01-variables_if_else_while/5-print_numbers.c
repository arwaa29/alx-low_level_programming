#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit of base 10,from 0
 *
 * Return: 0 (success).
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
