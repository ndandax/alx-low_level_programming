#include "main.h"
#include "stdlib.h"
/**
 *malloc_checked - Function name
 *@b: bytes
 *Return: 0
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(b * sizeof *p);

	if (p == NULL)
	{
		exit(98);
	}
}
