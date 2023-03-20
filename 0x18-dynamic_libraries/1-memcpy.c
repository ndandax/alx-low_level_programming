#include "main.h"
/**
 *_memcpy - Function name
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;

	return (dest);
}
