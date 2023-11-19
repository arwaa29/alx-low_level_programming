#include "main.h"

/**
 * flip_bits - return number of bits that would need to flipped to
 *       transform one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to convert numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval & 1ul)
	{
		count++;
	xorval = xorval >> 1;
	}
	return (count);
}


