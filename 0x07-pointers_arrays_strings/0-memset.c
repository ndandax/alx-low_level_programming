#include "main.h"
/**
 *_memset - Function name
 *@s: pointer
 *@b: constant byte
 *@n: number of bytes
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		s++ = b;
	return (s);
}
