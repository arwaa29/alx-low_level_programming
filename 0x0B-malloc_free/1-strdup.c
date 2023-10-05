#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int i, size;
	char *m;

	if (str == NULL)
		return (NULL);
	for (size = 0 ; str[size] != '\0'; size++)
	;

	/* +1 on the size puts the end of string character */
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < size ; i++)
			m[i] = str[i];
	}
	return (m);
}
