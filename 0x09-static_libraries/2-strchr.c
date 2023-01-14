#include "main.h"
/**
 *_strchr - Function name
 *@s: string
 *@c: character
 *Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
