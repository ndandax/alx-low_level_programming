#include "main.h"
/**
 *_strpbrk - Function name
 *@s: string
 *@accept: string
 *Return: pointer to the bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *sc;

	for (sc = s; *sc != '\0'; ++sc)
	{
		char *a;

		for (a = accept; *a != '\0'; ++a)
		{
			if (*a == *sc)
			{
				return ((char *)sc);
			}
		}
	}

	return (NULL);
}
