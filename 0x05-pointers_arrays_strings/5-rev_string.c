#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string input parameter
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int x, i;
	char temp;

	/*find string length without null pointer*/
	for (x = 0; s[x] != '\0'; x++)
		;

	/*swap th string by looping to half the string*/
	for (i = 0; i < x / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[x - 1 - i]; /*1 bec. array starts from zero*/
		s[x - 1 - i] = temp;
	}
}
