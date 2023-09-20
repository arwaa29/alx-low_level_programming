#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercase except e,q
 *              using putchar
 *
 * Return: 0 (success).
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
