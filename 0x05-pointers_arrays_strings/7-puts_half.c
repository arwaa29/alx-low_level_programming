#include "main.h"

/**
 * puts_half - function that print second half of a string
 * @str: char array string type
 * Description: if odd number of chars, print (length_of_the_string - 1) / 2.
 *
 * Return: nothing
*/

void puts_half(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	i++;
	for (i /= 2 ; str[i] != '\0' ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
