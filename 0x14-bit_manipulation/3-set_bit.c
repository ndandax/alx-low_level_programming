#include "main.h"

/**
 * set_bit - sets the value of a bit at index to 1
 * @n: the num in array
 * @index: where to set the value
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n |= (1 << index);
	return (1);
}
