#include "main.h"

/**
 * find_larger - Finds the larger of two numbers
 * @i: First number
 * @j: Second number
 * Return: The larger number
 */

int find_larger(int i, int j)
{
	return ((i > j) ? i : j);
}

/**
 * calculate_lengths - Calculates the lengths of two strings
 * @n1: First string
 * @n2: Second string
 * @i: Pointer to the length of the first string
 * @j: Pointer to the length of the second string
 * Return: The larger length
 */

int calculate_lengths(char *n1, char *n2, int *i, int *j)
{
	*i = 0;
	*j = 0;
	while (n1[*i] != '\0')
		(*i)++;
	while (n2[*j] != '\0')
		(*j)++;
	return (find_larger(*i, *j));
}

/**
 * shift_result_right - Shifts the result to the right
 * @r: Buffer to store the result
 * @large: The larger length of the two strings
 */

void shift_result_right(char *r, int large)
{
	while (large-- > 0)
		r[large + 1] = r[large];
}

/**
 * handle_carry - Handles the carry in the addition
 * @r: Buffer to store the result
 * @large: Pointer to the larger length of the two strings
 * @size_r: Size of the buffer
 * @carryout: The carry out value
 */

char  handle_carry(char *r, int *large, int size_r, int carryout)
{
	r[*large + 1] = '\0';
	if (*large + 2 > size_r)
		return (0);
	shift_result_right(r, *large);
	r[0] = carryout + '0';
}

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: First number string
 * @n2: Second number string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 * Return: Pointer to the result string, or 0 if it can't be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, large;
	int firstDigit, secondDigit, carryout = 0;

	/* Calculate the lengths of the input strings*/
	large = calculate_lengths(n1, n2, &i, &j);
	/* Check if the buffer can accommodate the result*/
	if (large + 1 >= size_r)
		return (0);

	r[large] = '\0';

	/* Perform the addition from the end of the strings*/

	for (k = large - 1; k >= 0; k--)
	{
		i--;
		j--;

		if (i >= 0)
			firstDigit = n1[i] - '0';
		else
			firstDigit = 0;

		if (j >= 0)
			secondDigit = n2[j] - '0';
		else
			secondDigit = 0;

		r[k] = (firstDigit + secondDigit + carryout) % 10 + '0';
		carryout = (firstDigit + secondDigit + carryout) / 10;
	}

	/* Handle any remaining carry*/
	if (carryout == 1)
		handle_carry(r, &large, size_r, carryout);

	return (r);
}
