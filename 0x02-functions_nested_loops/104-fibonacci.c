#include "main.h"

/**
 * num_length - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int num_length(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - entry point
 *
 * Description: prints the first 98 fibonacci numbers
 *             starting with 1 and 2 followed by a new line
 *
 * Return: always  0 (success)
*/

int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000;
	unsigned long f1o = 0, f2o = 0, sumo = 0;

	for (count = 1 ; count <= 98 ; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = num_length(mx) - 1 - num_length(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
