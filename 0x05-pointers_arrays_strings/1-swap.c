#include "main.h"
/**
 *swap_int - swap function
 *@a: - pointer
 *@b: - another pointer
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
