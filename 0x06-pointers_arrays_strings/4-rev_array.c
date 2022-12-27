#include "main.h"
/**
 *reverse_array - function name
 *@a: array
 *@n:length of array
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - 1 - 1] = j;
	}
}
