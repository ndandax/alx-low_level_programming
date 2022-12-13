#include "main.h"

/**
 *_isalpha - Entry point
 *
 *Return: 1 if lower or uppercase, 0 if not alphabet
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	putchar('\n');
}
