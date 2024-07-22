#include "main.h"

/**
 * infinite_add: function add two numbers
 * @n1: first number
 * @n2: second number
 * @r : buffer where the result will be stored in it
 * @size_r: result length(buffer size)
 * Return : sum of two numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    /*local variable declaration*/
	int i = 0, j = 0, k;
	int large, firstDigit, secondDigit, carryout = 0;
	while (n1[i] != '\0')
		i++;

	while (n2[j] != '\0')
		j++;

	if (i > j)
		large = i;
	else
		large = j;

	if (large + 1 > size_r)
		return (0);

	r[large] = '\0';
	for (k = large - 1 ; k >= 0 ; k--)
	{
		i--;
		j--;

		if (i >= 0)
			firstDigit = n1[i] - 48;
		else
			firstDigit = 0;

		if (j >= 0)
		{
			secondDigit = n2[j] - 48;
		}
		else
			secondDigit = 0;

		r[k] = (firstDigit + secondDigit + carryout) % 10 + 48;
		carryout = (firstDigit + secondDigit + carryout) / 10;
	}

	if (carryout == 1)
	{
		r[large + 1] = '\0';
		if (large + 2 > size_r)
			return (0);

		while (large-- > 0)
			r[large + 1] = r[large];
		r[0] = carryout + '0';
	}
	return (r);
}
