#include "main.h"
#include <stdlib.h>
/**
 *_strdup - Entry point
 *@str: string
 *Return: 0
 */
char *_strdup(char *str)
{
	unsigned int len = 0;
	char *p = str;
	char* result = malloc(len);
	char *y = result;



	while (*p != '\0')
	{
		++len;
		++p;
	}
	++len;



	if (result == NULL)
		return (NULL);


	p = str;
	while (*p != '\0')
	{
		*y = *str;
		++y;
		++p;
	}
	*y = '\0';
	free(result);

	return (result);
}
