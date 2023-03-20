#include "main.h"
/**
 *_strncat - Function
 *@src: source
 *@dest: destination
 *@n: number of bytes
 *Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + j))
		i++;
	while (*(src + j) && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
	{
		*(dest + i) = *(src + j);
	}
	return (dest);
}
