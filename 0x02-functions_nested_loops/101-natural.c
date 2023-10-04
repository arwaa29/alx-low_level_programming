#include "main.h"

/**
 * main - entry point.
 *
 * Description: computes and prints sum of all numbers that divisble by 3 or 5
 *              below 1024.
 *
 * Return: 0 always (success).
*/

int main(void)
{
	int sum = 0, num;

	for (num = 0 ; num < 1024 ; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d", sum);

	return (0);
}
