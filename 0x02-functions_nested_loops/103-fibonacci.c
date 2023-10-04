#include "main.h"

/**
 * main - entry point
 *
 * Description: find and print sum of the even-valued terms
 *              in fibonacci sequence.
 * Return: 0 always (success).
*/

int main(void)
{
	unsigned long int fib1 = 0, fib2 = 1, sum;
	double total_sum = 0;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		else if (sum % 2 == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%f\n", total_sum);

	return (0);
}
