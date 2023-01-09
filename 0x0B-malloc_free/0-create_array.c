#include "main.h"
#include <stdlib.h>
/**
 *create_array - Entry point
 *@size: number of bytes
 *@c: character
 *Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;
	ar = malloc(size * sizeof(char));


	for (i = 0; i < size; i++)
	{
		ar[i] = c;

		if (size == 0)
		{
			_putchar(failed to allocate memory);
			return (NULL);
		}
	}

	ar[i] = '\0';
	free (ar);

	return (ar);
}
