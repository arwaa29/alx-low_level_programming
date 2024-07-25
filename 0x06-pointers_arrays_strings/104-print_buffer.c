#include "main.h"
#include <stdio.h>

/**
 * isprintable_ASCII - function determine if n is a printable ascii or not
 * @n: integer
 * Return: 1 if true, 0 if false
 */

int isprintable_ASCII(int n)
{
	return ((n >= 32) && (n <= 126));
}


/**
 * print_hexa - function print hexa values for string b in formated form
 * @b: string to print and it points to the buffer
 * @start: starting position
 * @end: end position
 */

void print_hexa(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}


/**
 * print_ASCII - function print ascii values for string b
 * @b: string to print and points to buffer
 * @start: starting position
 * @end: ending position
 */

void print_ASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + start + i);
		if (!isprintable_ASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}


/**
 * print_buffer - function print buffer
 * @b: string to print and it points to buffer
 * @size: integer refers to buffer size
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0 ; start < size ; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			print_hexa(b, start, end);
			print_ASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
