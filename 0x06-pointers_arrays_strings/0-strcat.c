#include "main.h"
/**
 **_strcat - Function name
 *@dest: destinatio
 *@src: source
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';

	return (dest);
}
