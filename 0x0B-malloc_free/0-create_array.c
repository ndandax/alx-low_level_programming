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
	char *ar;
	ar = malloc(size * sizeof(char));
	
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ar[i] = c
		

		if (size == 0)
			return (NULL);
	}

	ar[i] = '\0';

	return (ar);
}
		

	
	
