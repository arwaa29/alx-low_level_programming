#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: always 0 (success)
*/

void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (height = 1; height <= size ; height++)
		{
			for (base = 1 ; base <= size ; base++)
			{
				if (height + base <= size)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
}
