/**
 *_strdup - Entry point
 *@str: string
 *Return: 0
 */
char *_strdup(char *str)
{
	unsigned int len = 0;
	char *p = str;

	while (*p != '\0')
	{
		++len;
		++p;
	}
	++len;

	char *result = malloc(len);

	if (result == NULL)
		return (NULL);

	char *y = result;

	p = s;
	while (*p != '\0')
	{
		*q = *s;
		++q;
		++p;
	}
	*q = '\0';
	free(result);

	return (result);
}
