#include "main.h"

/**
 * main - entry point
 *
 * Description: print the first 50 fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 always (success).
*/

int main(void)
{
	int count;
	unsigned int fib1 = 0, fib2 = 0, sum;

	for (count = 0 ; count < 49 ; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
