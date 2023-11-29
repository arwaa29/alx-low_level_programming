#include "main.h"

/**
 * swap_int - swaps two values of two integers by using two input parameters.
 *
 * @a: first input parameter
 * @b: second input parameter
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
